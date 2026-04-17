#include <iostream>
using namespace std;

class Figura {
public:
    virtual double area() const = 0;
    virtual ~Figura() = default;
};

class Rectangulo : public Figura {
    double ancho, alto;
public:
    Rectangulo(double a, double h) : ancho(a), alto(h) {}
    double area() const override { return ancho * alto; }
};

class Cuadrado : public Figura {
    double lado;
public:
    Cuadrado(double l) : lado(l) {}
    double area() const override { return lado * lado; }
};

void imprimirArea(const Figura& f) {
    cout << "Area: " << f.area() << endl;
}

int main() {
    Rectangulo r(5, 4);
    Cuadrado q(5);
    imprimirArea(r);
    imprimirArea(q);
    return 0;
}