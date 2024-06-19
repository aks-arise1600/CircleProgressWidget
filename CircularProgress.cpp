#include "CircularProgress.h"


CircularProgress::CircularProgress(QWidget *parent, double value, QColor color)
    : QWidget(parent), value(value), color(color)
{
    setFixedSize(100, 100);
}

void CircularProgress::m_updateValue(double val)
{
    value = val;
    update();
}

void CircularProgress::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    QRectF rectangle(10, 10, 80, 80);
    int startAngle = 90 * 16;
    int spanAngle = -value * 360 * 16;

    painter.setPen(QPen(Qt::gray, 15));
    painter.drawArc(rectangle, 0, 360 * 16);

    painter.setPen(QPen(color, 15));
    painter.drawArc(rectangle, startAngle, spanAngle);

    painter.setPen(Qt::black);
    painter.drawText(rectangle, Qt::AlignCenter, QString::number(value * 100) + "%");
}
