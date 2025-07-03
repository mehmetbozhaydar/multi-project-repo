#pragma once // sadece bir kere include edilebilmesini sağlar
//header dosyalarında sadece definition(tanımlama) yapılır.

class Point{//encapsulate
    private:
      float x;
      float y;
    
    public:
    //Parametreli constructor
    Point(float xValue,float yValue);

    float getX() const;//const üye değişkenler değiştirilemez
    float getY() const;//const üye değişkenler değiştirilemez

    void setX(float xValue);
    void setY(float yValue);

};
