#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <CircularProgress.h>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void sl_p1_timeout();
private:
    Ui::MainWindow *ui;
    QTimer *pTimer1 = 0;
    double p1_val = 0.1;
    double p2_val = 0.35;
    double p3_val = 0.20;
    double p4_val = 0.5;
    CircularProgress * cProgress1 = 0;
    CircularProgress * cProgress2 = 0;
    CircularProgress * cProgress3 = 0;
    CircularProgress * cProgress4 = 0;

};

#endif // MAINWINDOW_H
