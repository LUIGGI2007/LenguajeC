//https://github.com/LUIGGI2007/LenguajeC
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

void llenaVector(int v[], int n)
{
    srand(time(NULL));
    for (int i=0; i<n; i++)
    {
        v[i]=rand()%20+1;
        cin>>v[i];
    }
}

int ordenarBurbujaV1(int v[], int n)
{
    int aux,contador=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<n-1; j++)
        {
            contador++;
            if (v[j]>v[j+1])
            {
                aux =v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
            
        }
        
    }
    return contador;
}

int ordenarBurbujaV2(int v[], int n)
{
    int mejora=1;
    int aux,contador=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<n-mejora; j++)
        {
            contador++;
            if (v[j]>v[j+1])
            {
                aux =v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
            
        }
        mejora++;
    }
    return contador;
}

int ordenarBurbujaV3(int v[], int n)
{
    int mejora=1;
    bool cambio=true;
    int aux,contador=0;
    for (int i=0;i<n && cambio;i++)
    {
        cambio=false;
        for (int j=0; j<n-mejora; j++)
        {
            contador++;
            if (v[j]>v[j+1])
            {
                aux =v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
                cambio=true;
            }
            
        }
        mejora++;
    }
    return contador;
}

void muestraVector (int v[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}

void determinarMasOptima(int comparacionesV1, int comparacionesV2, int comparacionesV3)
{
    int menor = comparacionesV1; 
    string mejorVersion = "Burbuja V1";


    if (comparacionesV2 < menor)
    {
        menor = comparacionesV2;
        mejorVersion = "Burbuja V2";
    }


    if (comparacionesV3 < menor)
    {
        menor = comparacionesV3;
        mejorVersion = "Burbuja V3";
    }

    cout << "\nLa versión más óptima es: " << mejorVersion << " con " << menor << " comparaciones." << endl;
}


main()
{
    int ne;
    cout << "Número de elementos: ";
    cin >> ne;

    int vec[ne], copiaV1[ne], copiaV2[ne], copiaV3[ne];
    llenaVector(vec, ne);
    for (int i = 0; i < ne; i++)
    {
        copiaV1[i] = vec[i];
        copiaV2[i] = vec[i];
        copiaV3[i] = vec[i];
    }
    cout << "\nVector original: ";
    muestraVector(vec, ne);
    cout << endl;
    int comparacionesV1 = ordenarBurbujaV1(copiaV1, ne);
    int comparacionesV2 = ordenarBurbujaV2(copiaV2, ne);
    int comparacionesV3 = ordenarBurbujaV3(copiaV3, ne);
    cout << "\nComparaciones realizadas por cada versión:";
    cout << "\nBurbuja V1: " << comparacionesV1;
    cout << "\nBurbuja V2: " << comparacionesV2;
    cout << "\nBurbuja V3: " << comparacionesV3;
    determinarMasOptima(comparacionesV1, comparacionesV2, comparacionesV3);
    cout << "\n\nVector ordenado: ";
    muestraVector(copiaV1, ne); 
    cout << endl;


}



