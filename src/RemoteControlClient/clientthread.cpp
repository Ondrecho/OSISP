#include "clientthread.h"
#include <X11/Xlib.h>
#include <X11/extensions/XTest.h>
#include "mouse.h"

ClientThread::ClientThread(QObject* parent)
    : QThread(parent)
{
    // Клиент не подключен
    client_status = false;

    mouse.setEvent_flag(Mouse::NONE);
    keyboard.set_event_flag(Keyboard::NOT_PRESSED);

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = inet_addr(dataConnection.server_ip.toStdString().c_str()); // server IP
}


ClientThread::~ClientThread() {
    closeThread();
    Close(sockfd_for_connect);
}


void ClientThread::closeThread(){
    this->client_status = 0;
}


void ClientThread::receiveSettingsFromUISlot(DataConnection data) {
    dataConnection.password = data.password;
    dataConnection.server_ip = data.server_ip;
}


void ClientThread::receiveScreenshot() {
    QPixmap screenshot(FILENAME);
    if(client_status)
    {
        recv_file(&sockfd_for_connect, &client_status);
        emit screenshotReady(screenshot.toImage());
        qDebug("Скриншот получен");
    }
}


void ClientThread::run() {
    // Включение клиента
    client_status = 1;

    // Настройка сокета и подключение
    sockfd_for_connect = Socket(AF_INET, SOCK_STREAM, 0);
    Inet_pton(AF_INET, dataConnection.server_ip.toStdString().c_str(), &server_addr.sin_addr);
    int connect_status = Connect(sockfd_for_connect, (struct sockaddr*)&server_addr, sizeof(server_addr));
    if (connect_status == -1) {
        emit connectFailedSignal();
        emit signalToDisconnect();
        return;
    }

    // Отправка информации о клиенте
    sendClientInfoToServer();

    // Работа с X11
    Display* display = XOpenDisplay(NULL);
    if (!display) {
        fprintf(stderr, "Cannot open display\n");
        exit(1);
    }

    int i = 0;
    char message[64], len[16];

    while (client_status) {
        // 1. Получаем и отображаем скриншот
        receiveScreenshot();

        // 2. Подтверждаем получение
        send(sockfd_for_connect, "OK", 2, 0);

        // 3. Отправляем координаты мыши (уже рассчитанные как реальные экранные X/Y)
        sprintf(message, "%d %d", lastMouseX, lastMouseY);
        snprintf(len, sizeof(len), "%zu", strlen(message));
        send(sockfd_for_connect, len, 16, 0);
        send(sockfd_for_connect, message, strlen(message), 0);

        qDebug("Sent mouse coordinates: x=%d, y=%d", lastMouseX, lastMouseY);

        // 4. Отправляем событие мыши
        char mouse_event = mouse.getEvent_flag() + '0';
        send(sockfd_for_connect, &mouse_event, 1, MSG_NOSIGNAL);
        qDebug() << "Sent mouse event:" << mouse_event;
        mouse.setEvent_flag(Mouse::NONE);  // сбрасываем

        // 5. Отправляем событие клавиатуры
        if (keyboard.get_event_flag() == Keyboard::IS_PRESSED) {
            sprintf(message, "%d", keyboard.get_native_key_code());
            send(sockfd_for_connect, message, 16, 0);
            qDebug() << "Sent key code:" << message;
            keyboard.set_event_flag(Keyboard::NOT_PRESSED);
        } else {
            send(sockfd_for_connect, "0", 16, 0);
        }

        // 6. Ждём следующего кадра
        msleep(1000 / FPS);
        qDebug("iterations = %d", i++);
    }

    // Завершаем соединение
    Close(sockfd_for_connect);
    XCloseDisplay(display);
    emit signalToDisconnect();
}


void ClientThread::sendClientInfoToServer()
{
    Client client;
    QHostInfo info;
    QByteArray data = info.localHostName().toUtf8();

    client.set_local_host_name(data.toStdString().c_str());
    client.set_password(dataConnection.password.toStdString().c_str());
    client.set_ip(inet_ntoa(server_addr.sin_addr));

    qDebug() << "Local host=" << data;
    qDebug() << "password=" << client.get_password();
    qDebug() << "ip=" << client.get_ip();

    unsigned char* client_ptr = (unsigned char*)&client;
    send(sockfd_for_connect, std::to_string(sizeof(client)).c_str(), MAX_SIZE_INT_STR, MSG_NOSIGNAL);
    qDebug("length of Сlient struct was sended");
    send(sockfd_for_connect, client_ptr, sizeof(client), MSG_NOSIGNAL);
    qDebug("Client struct was sended");

    // Получаем статус пароля от сервера:
    char password_status;
    recv(sockfd_for_connect, &password_status, 1, MSG_WAITALL);
    if(password_status == '1') {
        emit showPasswordStatusSignal(1);  // all good
    } else {
        emit showPasswordStatusSignal(0);  // all bad
        closeThread();
        Close(sockfd_for_connect);
    }
}


void ClientThread::getMouseEventFromWindowSlot(int event_flag, int realX, int realY)
{
    qDebug() << "Event flag =" << event_flag << "realX=" << realX << "realY=" << realY;
    mouse.setEvent_flag(event_flag);
    lastMouseX = realX;
    lastMouseY = realY;
}

void ClientThread::getKeyEventFromWindowSlot(int is_pressed, int key_code)
{
    qDebug() << "is_pressed = " << is_pressed << " key_code = " << key_code;
    keyboard.set_event_flag(is_pressed);
    keyboard.set_native_key_code(key_code);
}
