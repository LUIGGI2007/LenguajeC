#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../ordenamiento/burbuja.cpp"
using namespace std;
void llenaDatos(int v[], int n)
{

}
void verDatos()
{

}
bool isBusquedaBinaria(int v[], int n, int elemento)
{

}
main()
{
    int ne, dato;
    cout << "Nro de Elementos del Array: ";
    cin >> ne;
    int vector[ne];
    llenaDatos(vector, ne);
    cout<< "Ingrese el dato a buscar: ";
    (isBusquedaBinaria(vector, ne,dato))?cout<<"Dato Encontrado ": cout<< "Dato no encontrado" ;
    cin >> dato;
}