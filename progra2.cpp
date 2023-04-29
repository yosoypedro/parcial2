#include <iostream>
#include "FiguraGeometrica.h"

using namespace std;

int main() {
    int opcion;
    double lado, base, altura, radio, diagonalMayor, diagonalMenor;

    do {
        // Mostrar menú de opciones
        cout << "Seleccione una figura geométrica para calcular su área:" << endl;
        cout << "1. Cuadrado" << endl;
        cout << "2. Rectángulo" << endl;
        cout << "3. Triángulo" << endl;
        cout << "4. Círculo" << endl;
        cout << "5. Rombo" << endl;
        cout << "0. Salir" << endl;
        cin >> opcion;

        // Realizar cálculo de área según opción seleccionada
        switch (opcion) {
            case 1:
                cout << "Ingrese el lado del cuadrado: ";
                cin >> lado;
                Cuadrado cuadrado(lado);
                cout << "El área del cuadrado es: " << cuadrado.calcularArea() << endl;
                break;
            case 2:
                cout << "Ingrese la base del rectángulo: ";
                cin >> base;
                cout << "Ingrese la altura del rectángulo: ";
                cin >> altura;
                Rectangulo rectangulo(base, altura);
                cout << "