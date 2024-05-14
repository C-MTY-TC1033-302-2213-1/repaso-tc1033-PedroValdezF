#ifndef Punto_hpp
#define Punto_hpp
#include <string>
#include <stdio.h>
using namespace std;

class Punto {
private:
double x;
double y;

public:
Punto();
Punto(double _x, double _y);

void setX(double _x);
void setY(double _y);

double getX();
double getY();

double calculaDistancia(const Punto& otro) const;
string str();
};

#endif