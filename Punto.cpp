#include "Punto.hpp"
#include <cmath>
Punto::Punto(){
    x = 0;
    y = 0;
}
Punto::Punto(double _x, double _y){
    x = _x;
    y = _y;
}

void Punto::setX(double _x){
    x = _x;
}
void Punto::setY(double _y){
    y = _y;
}

double Punto::getX(){
    return x;
}
double Punto::getY(){
    return y;
}

double Punto::calculaDistancia(){
    return sqrt(x*x + y*y);
}
string Punto::str(){
    return "0";
}

