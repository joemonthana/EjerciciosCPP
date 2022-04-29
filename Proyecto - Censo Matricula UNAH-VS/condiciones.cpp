#include <iostream>

using namespace std;

int totalUv = 0;
int uvDisponibles = 0;
string listado;

void agregarAsignatura(string asignatura, int cantidad, int uv)
{
    listado = listado + asignatura + '\n';
    totalUv = totalUv + uv;
    uvDisponibles = 25 - totalUv;
}

void clasesAgregadas()
{
    system("cls");
cout << "\t\tClases Agregadas" << endl;
cout << endl;

cout << listado;
cout << endl;

cout << "\t\tTotal de Unidades Valorativas " << endl;
    cout << endl;
    cout << "\t\tUnidades Valorativas Agregadas: " << totalUv;
    cout << endl;
    cout << "\t\tUnidades Valorativas Disponibles: " << uvDisponibles;
    cout << endl;

system("pause");
}

