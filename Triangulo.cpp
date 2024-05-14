#include "Triangulo.hpp"
#include <cmath>

Triangulo::Triangulo(){
    v1 = Punto();
    v2 = Punto();
    v3 = Punto();
}
Triangulo::Triangulo(Punto _v1, Punto _v2, Punto _v3){
    v1 = _v1;
    v2 = _v2;
    v3 = _v3;
}

Punto Triangulo::getV1(){
    return v1;
}
Punto Triangulo::getV2(){
    return v2;
}
Punto Triangulo::getV3(){
    return v3;
}

void Triangulo::setV1(Punto _v1){
    v1 = _v1;
}
void Triangulo::setV2(Punto _v2){
    v2 = _v2;
}
void Triangulo::setV3(Punto _v3){
    v3 = _v3;
}

double Triangulo::perimetro(){
    double peri = sqrt(pow((v2.getX() - v1.getX()), 2) + pow((v2.getY() - v1.getY()), 2)) +
    sqrt(pow((v3.getX() - v2.getX()), 2) + pow((v3.getY() - v2.getY()), 2)) +
    sqrt(pow((v3.getX() - v1.getX()), 2) + pow((v3.getY() - v1.getY()), 2));
    return peri;
}
double Triangulo::area(){
    double ar = 0.5 * (((v1.getX() * v2.getY()) + (v2.getX() * v3.getY()) +
    (v3.getX() * v1.getY())) - ((v1.getX() * v3.getY()) + (v3.getX() * v2.getY()) +
    (v2.getX() * v1.getY())));
    return ar;
}
string Triangulo::str(){
    return "0";
}