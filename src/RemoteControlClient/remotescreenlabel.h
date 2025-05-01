#ifndef REMOTESCREENLABEL_H
#define REMOTESCREENLABEL_H

#include <QLabel>
#include <QMouseEvent>
#include <QImage>

class RemoteScreenLabel : public QLabel
{
    Q_OBJECT
public:
    explicit RemoteScreenLabel(QWidget *parent = nullptr);
    void setScreenshot(const QImage &img);

signals:
    void mouseEvent(int event_flag, int x, int y);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

private:
    QImage lastScreenshot;
};

#endif // REMOTESCREENLABEL_H
