#include <iostream>
using namespace std;

struct persona
{
    int id;
    string nombre;
    int edad;
    bool casado=false;
};

void ingresarDatosRegistro(persona per[], int n)
{
    char resp;
    int i;
    for(i=0; i<n; i++)
    {
        per[i].id=i+1;
        cout<<"Ingrese el nombre de la persona: ";
        cin>>per[i].nombre;
        cout<<"Ingrese la edad de la persona: ";
        cin>>per[i].edad;
        cout<<"Es casado? <<S/N>>: ";
        cin.get(resp);
        cin.ignore();
        if(resp=='S' || resp=='s')
            per[i].casado=true;
    }
}

void mostrarDatosRegistro(persona per[], int n)
{
    int i;
    cout<<"ID\tNombre\tEdad\tCasado"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<per[i].id<<"\t";
        cout<<per[i].nombre<<"\t";
        cout<<per[i].edad<<"\t";
        cout<<per[i].casado<<endl;
    }
}

main()
{
    int np;
    cout<<"Ingrese la cantidad de personas: ";
    cin>>np;
    persona per[np];
    ingresarDatosRegistro(per, np);
    mostrarDatosRegistro(per, np);
}
