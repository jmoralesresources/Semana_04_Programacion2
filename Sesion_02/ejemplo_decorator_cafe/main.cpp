#include <iostream>
#include <string>
using namespace std;

class ICafe {
public:
    virtual double costo() const = 0;
    virtual string descripcion() const = 0;
    virtual ~ICafe() = default;
};

class CafeSimple : public ICafe {
public:
    double costo() const override { return 1.50; }
    string descripcion() const override { return "Cafe simple"; }
};

class DecoradorCafe : public ICafe {
protected:
    ICafe* cafe;
public:
    DecoradorCafe(ICafe* c) : cafe(c) {}
};

class ConLeche : public DecoradorCafe {
public:
    ConLeche(ICafe* c) : DecoradorCafe(c) {}
    double costo() const override { return cafe->costo() + 0.50; }
    string descripcion() const override { return cafe->descripcion() + ", leche"; }
};

class ConAzucar : public DecoradorCafe {
public:
    ConAzucar(ICafe* c) : DecoradorCafe(c) {}
    double costo() const override { return cafe->costo() + 0.25; }
    string descripcion() const override { return cafe->descripcion() + ", azucar"; }
};

int main() {
    ICafe* c = new CafeSimple();
    cout << c->descripcion() << " = " << c->costo() << endl;
    c = new ConLeche(c);
    cout << c->descripcion() << " = " << c->costo() << endl;
    c = new ConAzucar(c);
    cout << c->descripcion() << " = " << c->costo() << endl;
    delete c;
    return 0;
}