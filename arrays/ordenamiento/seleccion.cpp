#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;


void llenaVector(int v[], int n) {
    srand(time(NULL));
    for (int i=0; i<n; i++) {
        cin>>v[i];
    }
}
void verVector (int v[],int n ){

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<"\t";
    }
    
}
int ordenaSeleccion(int v[],int n){

    int contar=0, aux;
    for(int i=0;i<n-1;i++){
        for (int j=i+1; j<n ;j++){
          contar++;
          if(v[i]>[j]){
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
          }
        }
    }
  return contar;
}


main() {
    int ne, comparaciones;
    cout<<"Ingresa numeros de elementos del vector: ";
    cin>>ne;
    int vector[ne];
    llenaVector (vector, ne);
    cout<<"Vector original: \n" ;
    verVector(vector,ne);
    comparaciones=ordenaSeleccion(vector,ne);
    verVector (vector,ne);
    cout<<"\nEl numero de comparaciones=   "
  }
