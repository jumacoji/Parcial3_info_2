#include "bolas.h"

Bolas::Bolas(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/bolita/Bolini.png"));
    int x = PosX();
    int y = PosY();
    setPos(x,y);
}


int Bolas::PosX(){
    int X =rand()%501;
    return  X;
}

int Bolas::PosY(){
    int Y = rand()%201;
    return  Y;
}
