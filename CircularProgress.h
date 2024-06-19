#ifndef CIRCULARPROGRESS_H
#define CIRCULARPROGRESS_H

#include <QObject>
#include <QWidget>
#include <QPainter>

class CircularProgress: public QWidget
{
    Q_OBJECT
public:
    CircularProgress(QWidget *parent = nullptr, double value = 0.0, QColor color = Qt::blue);
    void m_updateValue(double val);
protected:
    void paintEvent(QPaintEvent *) override;

private:
    double value;
    QColor color;
};

#endif // CIRCULARPROGRESS_H
