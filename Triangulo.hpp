#ifndef Triangulo_hpp
#define Triangulo_hpp
#include "Punto.hpp"

using namespace std;

class Triangulo {
private:
    Punto v1, v2, v3;
public:
    Triangulo();
    Triangulo(Punto _v1, Punto _v2, Punto _v3);

    Punto getV1();
    Punto getV2();
    Punto getV3();

    void setV1(Punto _v1);
    void setV2(Punto _v2);
    void setV3(Punto _v3);

    double perimetro();
    double area();
    string str();
};


#endif