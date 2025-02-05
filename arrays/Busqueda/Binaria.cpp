#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void burbuja(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
            
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void llenaDatos(int v[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 100; 
    }

    burbuja(v, n);
}


void verDatos(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}


bool isBusquedaBinaria(int v[], int n, int elemento) {
    int lAbajo = 0, lArriba = n - 1, iCentro;

    while (lAbajo <= lArriba) {
        iCentro = (lArriba + lAbajo) / 2;

        if (v[iCentro] == elemento) {
            return true; 
        }
        if (v[iCentro] < elemento) {
            lAbajo = iCentro + 1; 
        } else {
            lArriba = iCentro - 1; 
        }
    }
    return false; 
}

int main() {
    int ne, dato;

    cout << "Nro de Elementos del Array: ";
    cin >> ne;

    int vector[ne];
    llenaDatos(vector, ne);

    cout << "Array generado: ";
    verDatos(vector, ne);

    cout << "Ingrese el dato a buscar: ";
    cin >> dato;

    (isBusquedaBinaria(vector, ne, dato)) ? cout << "Dato Encontrado" : cout << "Dato no encontrado";

    return 0;
}
