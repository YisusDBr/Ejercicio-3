#include <iostream>
#include <cstdlib>
#include <windows.h> 

using namespace std;

void mostrarEstado(int pisoActual) {
    cout << "El ascensor se encuentra en el piso: " << pisoActual << endl;
}

void abrirPuertas() {
    cout << "Se han abierto las puertas del ascensor." << endl;
}

void cerrarPuertas() {
    cout << "Se han cerrado las puertas del ascensor." << endl;
}

void subir(int &pisoActual, int pisoDestino) {
    while (pisoActual < pisoDestino) {
        cerrarPuertas();
        cout << "El ascensor esta subiendo." << endl;
        pisoActual++;
        mostrarEstado(pisoActual);
        Sleep(1000); // Pausa de 1 segundo para simular el movimiento
    }
}

void bajar(int &pisoActual, int pisoDestino) {
    while (pisoActual > pisoDestino) {
        cerrarPuertas();
        cout << "El ascensor esta bajando." << endl;
        pisoActual--;
        mostrarEstado(pisoActual);
        Sleep(1000); // Pausa de 1 segundo para simular el movimiento
    }
}

int main() {
    int pisoActual = 0; // El ascensor comienza en el piso 0
    int pisoDestino;
    char continuar;

    do {
        cout << "Indique el piso donde quiere ir (0-13): ";
        cin >> pisoDestino;

        if (pisoDestino < 0 || pisoDestino > 13) {
            cout << "Piso invalido. Debe estar entre 0 y 13." << endl;
            continue; // Volver a pedir el piso si es inválido
        }

        if (pisoDestino > pisoActual) {
            subir(pisoActual, pisoDestino);
        } else if (pisoDestino < pisoActual) {
            bajar(pisoActual, pisoDestino);
        }

        abrirPuertas(); // Abre las puertas al llegar al destino

        cout << "¿Desea ir a otro piso? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "Gracias por usar el ascensor"<< endl;
    return 0;
}
