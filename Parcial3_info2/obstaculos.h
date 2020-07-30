#ifndef OBSTACULOS_H
#define OBSTACULOS_H
#include "mainwindow.h"
#include <QObject>

class Obstaculos:public QGraphicsPixmapItem, public QObject
{
public:
    Obstaculos();
    int PosX();
    int PosY();

private:
    int X,Y, x, y;
};

#endif // OBSTACULOS_H
