#include <iostream>
using namespace std;

class Rectangulo {
public:
    virtual void setAncho(double w) { ancho = w; }
    virtual void setAlto(double h) { alto = h; }
    virtual double area() const { return ancho * alto; }
protected:
    double ancho = 0, alto = 0;
};

class Cuadrado : public Rectangulo {
public:
    void setAncho(double w) override {
        ancho = alto = w;
    }
    void setAlto(double h) override {
        ancho = alto = h;
    }
};

void usar(Rectangulo& r) {
    r.setAncho(5);
    r.setAlto(4);
    cout << r.area() << endl;
}

int main() {
    Rectangulo r;
    usar(r);
    Cuadrado q;
    usar(q);  // imprime 16, no 20 → viola LSP
    return 0;
}