#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cProgress1 = new CircularProgress(ui->label_1, p1_val , QColor{0,191,255});
    cProgress2 = new CircularProgress(ui->label_2, p2_val , QColor{148,0,211});

    cProgress3 = new CircularProgress(ui->label_3, p3_val , QColor{255,0,0});
    cProgress4 = new CircularProgress(ui->label_4, p4_val , QColor{0,128,128});


    pTimer1 = new QTimer;
    connect(pTimer1, SIGNAL(timeout()),SLOT(sl_p1_timeout()));
    pTimer1->start(500);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sl_p1_timeout()
{
    if(p1_val<1)
        p1_val+=0.05;
    else
        p1_val = 0.0;

    cProgress1->m_updateValue(p1_val);


    if(p2_val<1)
        p2_val+=0.05;
    else
        p2_val = 0.0;

    cProgress2->m_updateValue(p2_val);


    if(p3_val<1)
        p3_val+=0.05;
    else
        p3_val = 0.0;

    cProgress3->m_updateValue(p3_val);


    if(p4_val<1)
        p4_val+=0.05;
    else
        p4_val = 0.0;

    cProgress4->m_updateValue(p4_val);
}
