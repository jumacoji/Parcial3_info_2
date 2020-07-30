#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer;
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,500,500);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Bolita_clicked()            //Boton el cual sirve para aniadir una bolita
{

}

void MainWindow::movimiento(){          //Funcion la cual sirve para darle movimiento a los objetos

    double Ydeseado;
    int relacion = 1;

    X += (Vx*T);
    Y += Vy*T-(a/2)*(T*T);
    Vy += (a*T);
    Ydeseado = 2*Yo-Y;

}
