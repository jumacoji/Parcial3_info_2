#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Bolita_clicked()            //Boton el cual sirve para aniadir una bolita
{

}

void MainWindow::movimiento(){
    double Yd;
    //    vy+=(a*T);
//    x+=(vx*T);
//    y+=vy*T-(a/2)*(T*T);
//    yd=2*yo-y;
    X += (Vx*T);
    Y += Vy*T-(a/2)*(T*T);
    Vy += (a*T);

}
