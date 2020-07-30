#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QPainter>
#include "bolas.h"
#include "obstaculos.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QGraphicsScene *scene;
    Bolas *bola1;
    Obstaculos *wall1;
//    Obstaculos *obstaculo;


private slots:
    void on_Bolita_clicked();
    void movimiento();

private:
    Ui::MainWindow *ui;
    double X, Y, Vx, Vy, Yo ;               //Se crean las variables de posicion en X, en Y, la velocidad en X y la velocidad en Y y Y sub cero
    double T = 0.01, a = -9.8 ;        //Al igual se crea el periodo y la aceleracion
    QTimer *timer;
    short ban = 0;

};
#endif // MAINWINDOW_H
