/*
* Kullanıcıdan alınan iki nokta arasındaki geometrik uzunluğu hesaplama
* Nokta sınıfı oluşturarak bu sınıf içinde x ve y kordinatları tanımlayarak, pisagor teoremi kullanın
*/
#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;


// Uzaklık hesaplama fonk
float distanceCalculation(const Point& point1,const Point& point2){/*& işareti kullanmadan işlem yaparsan memoryde 
    gereksiz yer kaplar & kulanırsan referans adresi kullanılır sadece*/ 
    return sqrt(pow(point1.getX()-point2.getX(),2)+pow(point1.getY()-point2.getY(),2));

}

int main() {
    float x1,y1,x2,y2;

    std::cout<<"Enter the x and y coordinates of the first point:  ";
    cin>>x1 >>y1;

    std::cout<<"Enter the x and y coordinates of the second point:  ";
    cin>>x2 >> y2;

    Point point1(x1,y1);
    Point point2(x2,y2);

    float distance=distanceCalculation(point1, point2);

    cout<<"Distance between two points: "<< distance<<endl;


    return 0;
}