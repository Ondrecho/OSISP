#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QKeyEvent>

#include "dialog.h"
#include "clientthread.h"
#include "ui_mainwindow.h"
#include "client.h"
#include "mouse.h"
#include "keyboard.h"
#include "remotescreenlabel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

signals:
    void sendSettingsFromUISignal(DataConnection data);                         // сигнал для отправки настроек с UI
    void keyIsPressed(int is_pressed, int key_code);                            // сигнал для отправки события клавиатуры

protected:
    void keyPressEvent(QKeyEvent *event) override;                              // клавиатура

public:
    MainWindow(QWidget *parent = nullptr);                    // конструктор
    ~MainWindow();                                            // деструктор

private slots:
    void on_actionExit_triggered();                           // выход из приложения
    void on_actionSettings_triggered();                       // зайти в настройки
    void on_actionConnect_to_server_triggered();              // подсоединиться к серверу
    void on_actionDisconnect_from_the_server_triggered();     // отсоединиться от сервера

public slots:
    void updateScreenshot(QImage screenshot);                 // обновить скриншот на экране
    void showPasswordStatusSlot(int status);                  // показать статус правильности пароля
    void connectFailedSlot();                                 // не удалось соединиться с сервером

private:
    Ui_MainWindow *ui;                                       // пользовательский интерфейс
    Dialog settings;                                          // настройки
    ClientThread clientThread;                                // рабочий поток клиента
    QImage lastScreenshot;                                    // будем хранить последний снятый сервером экран
};
#endif // MAINWINDOW_H
