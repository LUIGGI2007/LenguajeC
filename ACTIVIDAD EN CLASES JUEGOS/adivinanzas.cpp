/*Crear un juego de adivinanzas en el que el usuario tiene que adivinar un número entre 1 y 10
El programa debe generar un número aleatorio entre 1 y 10 y el usuario tiene 3 intentos para adivinarlo
Si el usuario adivina el número, el programa debe mostrar un mensaje de felicitaciones
Si el usuario no adivina el número, el programa debe mostrar un mensaje de que el usuario ha perdido
El programa debe mostrar el número que se generó aleatoriamente
El programa debe mostrar el número de intentos que le quedan al usuario*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../librerias/arrays.h"
using namespace std;

void jugarAdivinanza(int min, int max) {
    srand(time(0));
    int numero_secreto = rand() % (max - min + 1) + min; 
    int intento;
    int intentos_restantes = 3;
    bool adivinado = false;

    cout << "Juego de adivinanzas: Adivina un número entre " << min << " y " << max << "." << endl;

    while (intentos_restantes > 0 && !adivinado) {
        cout << "\nTe quedan " << intentos_restantes << " intentos. Ingresa tu Numero: ";
        cin >> intento;

        if (intento == numero_secreto) {
            cout << "\n¡Felicidades! Has adivinado el numero." << endl;
            adivinado = true;
        } else {
            cout << "\nNumero incorrecto." << endl;
            intentos_restantes--;
            if (intento < numero_secreto) {
                cout << "El numero secreto es mayor." << endl;
            } else {
                cout << "El numero secreto es menor." << endl;
            }
        }
    }

    if (!adivinado) {
        cout << "\nGAME OVER EN OTRA VIDA INTENTALO. El numero correcto era: " << numero_secreto << endl;
    }
}

int main() {
    int min, max;
    cout << "Ingrese el rango de números para adivinar." << endl;
    cout << "Mínimo: ";
    cin >> min;
    cout << "Máximo: ";
    cin >> max;
    
    if (min >= max) {
        cout << "Rango inválido. El valor mínimo debe ser menor que el máximo." << endl;
        return 1;
    }
    
    jugarAdivinanza(min, max);
}