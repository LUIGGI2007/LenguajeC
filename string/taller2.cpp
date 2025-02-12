#include <iostream>
using namespace std;

main()
{
    string cadena1= ("Informatica");
    string cadena4;
    const char *auxiliar;
    string cadena2(cadena1); //cadena2= cadena1
    string cadena3(10, '*'); 
    cout<<cadena3<<endl;
    cadena1.push_back('Z');//permite añadir 1 caracter al final de la cadena
    cout<<cadena1<<endl;
    cadena1.at(0)='i';//metodo at accede a un indice de la cadena cadena1[0]
    cout<<cadena1<<endl;
    //Usando el metodo front y back para cambiar los caracteres inicio y final
    cadena1.front()='i';
    cadena1.back()='A';
    cout<<cadena1<<endl;
    auxiliar = cadena1.c_str();
    cout<<"auxiliar array char: "<<auxiliar<<endl; 
    //metodo empty para conocer si una cadena esta vacia o no
    (cadena4.empty())? cout<<"cadena esta vacia\n":cout<<"cadena no esta vacia\n";
    //tamaño maximo de caracteres que puede almacenar la cadena
    cout<<"tamaño maximo: "<<cadena1.max_size()<<endl;
    //tamaño em bytes del objeto string que ocupa actualmente
    cout<<"Capacidad: "<<cadena1.capacity()<<endl;


}