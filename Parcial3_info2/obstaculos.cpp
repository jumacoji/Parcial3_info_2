#include "obstaculos.h"

Obstaculos::Obstaculos()
{
    setPixmap(QPixmap(":/bolita/Obstacle.png"));
    x = PosX();
    y = PosY();
    setPos(x,y);
}

int Obstaculos::PosX(){
    X = rand()%501;
    return X;
}

int Obstaculos::PosY(){
    Y = rand()%501;
    return Y;
}
