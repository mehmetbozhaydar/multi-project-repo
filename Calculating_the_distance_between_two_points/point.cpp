#include "point.h"


Point::Point(float xValue,float yValue):x(xValue),y(yValue){
        /*this->x =xValue;
        this->y =yValue;*///ikinci yöntem
}

float Point::getX() const{//const üye değişkenler değiştirilemez
    return x;
}

float Point::getY() const{//const üye değişkenler değiştirilemez
   return y;
}

void Point::setX(float xValue){
   x=xValue;
}

void Point::setY(float yValue){
    y=yValue;
}

