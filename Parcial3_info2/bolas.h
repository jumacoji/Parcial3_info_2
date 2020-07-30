#ifndef BOLAS_H
#define BOLAS_H
#include "mainwindow.h"
#include <QGraphicsItem>

class Bolas: public QObject, public QGraphicsPixmapItem
{

Q_OBJECT

public:
    Bolas(QGraphicsItem *parent);
    int PosX();
    int PosY();

private:
    int X,Y;
};

#endif // BOLAS_H
