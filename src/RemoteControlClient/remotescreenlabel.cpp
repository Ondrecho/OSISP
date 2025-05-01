#include "remotescreenlabel.h"
#include "client.h"

#include <mouse.h>

RemoteScreenLabel::RemoteScreenLabel(QWidget *parent)
    : QLabel(parent)
{
    setMouseTracking(true);
}

void RemoteScreenLabel::setScreenshot(const QImage &img) {
    lastScreenshot = img;
}

static QPointF mapToImage(int x, int y, const QImage &img, const QLabel *lbl)
{
    QSizeF lblSize = lbl->size();
    QSizeF imgSize = img.size();
    qreal kx = imgSize.width()  / lblSize.width();
    qreal ky = imgSize.height() / lblSize.height();
    QPointF p(x * kx, y * ky);
    return p;
}

void RemoteScreenLabel::mouseMoveEvent(QMouseEvent *event) {
    if (lastScreenshot.isNull()) return;
    QPointF real = mapToImage(event->pos().x(), event->pos().y(), lastScreenshot, this);
    qDebug() << "MOUSE MOVE at" << real;
    emit mouseEvent(Mouse::MOVE, int(real.x()), int(real.y()));
}

void RemoteScreenLabel::mousePressEvent(QMouseEvent *event) {
    if (lastScreenshot.isNull()) return;
    QPointF real = mapToImage(event->pos().x(), event->pos().y(), lastScreenshot, this);
    int flag = Mouse::NONE;
    if (event->button() == Qt::LeftButton){
        flag = Mouse::LEFT_PRESS;
        qDebug() << "LEFT CLICK at" << real;
    }
    if (event->button() == Qt::RightButton){
        flag = Mouse::RIGHT_PRESS;
        qDebug() << "RIGHT CLICK at" << real;
    }
    emit mouseEvent(flag, int(real.x()), int(real.y()));
}

void RemoteScreenLabel::mouseReleaseEvent(QMouseEvent *event) {
    if (lastScreenshot.isNull()) return;
    QPointF real = mapToImage(event->pos().x(), event->pos().y(), lastScreenshot, this);
    qDebug() << "RELEASE at" << real;
    emit mouseEvent(Mouse::RELEASE, int(real.x()), int(real.y()));
}

void RemoteScreenLabel::mouseDoubleClickEvent(QMouseEvent *event) {
    if (lastScreenshot.isNull()) return;
    QPointF real = mapToImage(event->pos().x(), event->pos().y(), lastScreenshot, this);
    qDebug() << "DOUBLECLICK at" << real;
    emit mouseEvent(Mouse::DOUBLECLICK, int(real.x()), int(real.y()));
}

void RemoteScreenLabel::wheelEvent(QWheelEvent *event)
{
    int delta = event->angleDelta().y();
    int flag = Mouse::NONE;
    if (delta > 0)
        flag = Mouse::SCROLL_UP;
    else if (delta < 0)
        flag = Mouse::SCROLL_DOWN;

    QPointF real = mapToImage(event->position().x(), event->position().y(), lastScreenshot, this);
    emit mouseEvent(flag, int(real.x()), int(real.y()));

    event->accept();
}
