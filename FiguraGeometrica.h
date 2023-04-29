#include <cmath>

// Clase base para FiguraGeometrica
class FiguraGeometrica {
public:
    virtual double calcularArea() const = 0;
};

// Clase para Cuadrado
class Cuadrado : public FiguraGeometrica {
private:
    double lado;
public:
    Cuadrado(double l) : lado(l) {}
    double calcularArea() const override {
        return lado * lado;
    }
};

// Clase para Rectángulo
class Rectangulo : public FiguraGeometrica {
private:
    double base, altura;
public:
    Rectangulo(double b, double h) : base(b), altura(h) {}
    double calcularArea() const override {
        return base * altura;
    }
};

// Clase para Triángulo
class Triangulo : public FiguraGeometrica {
private:
    double base, altura;
public:
    Triangulo(double b, double h) : base(b), altura(h) {}
    double calcularArea() const override {
        return (base * altura) / 2;
    }
};

// Clase para Círculo
class Circulo : public FiguraGeometrica {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double calcularArea() const override {
        return M_PI * radio * radio;
    }
};

// Clase para Rombo
class Rombo : public FiguraGeometrica {
private:
    double diagonalMayor, diagonalMenor;
public:
    Rombo(double dm, double dM) : diagonalMayor(dM), diagonalMenor(dm) {}
    double calcularArea() const override {
        return (diagonalMayor * diagonalMenor) / 2;
    }
};