# Ejercicio-3

#include <iostream>
using namespace std;

int main() {
    int scores[4];
    cout << "Ingresa las 4 puntuaciones entre 0 y 100: " << endl;
    
    // Leer las puntuaciones
    for(int i = 0; i < 4; i++) {
        cin >> scores[i];
    }
    
    // Calcular la media
    float sum = 0;
    for(int i = 0; i < 4; i++) {
        sum += scores[i];
    }
    float average = sum / 4;
    
    // Mostrar la media
    cout << "La media de las puntuaciones es: " << average << endl;
    
    // Evaluar y mostrar la tabla de notas
    cout << "Tabla de notas:" << endl;
    for(int i = 0; i < 4; i++) {
        if(scores[i] >= 90 && scores[i] <= 100) {
            cout << "A" << endl;
        } else if(scores[i] >= 80 && scores[i] < 90) {
            cout << "B" << endl;
        } else if(scores[i] >= 70 && scores[i] < 80) {
            cout << "C" << endl;
        } else if(scores[i] >= 60 && scores[i] < 70) {
            cout << "D" << endl;
        } else {
            cout << "E" << endl;
        }
    }
    
    return 0;
}
