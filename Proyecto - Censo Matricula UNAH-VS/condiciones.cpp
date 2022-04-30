#include <iostream>
#include <string>

using namespace std;

int totalUv = 0;
int uvDisponibles = 0;
string listado;
string nombre;
int promedioGlobal = 0;

void nombreEstudiante()
{
    cout << "Ingrese su nombre: " << endl;
    cin.ignore();
    getline (cin, nombre);
}


void promedio()
{
    cout << "Ingrese promedio global: " << endl;
    cin >> promedioGlobal;
    if (promedioGlobal < 0 && promedioGlobal > 100)
    cout << "\t\tOpcion no valida" << endl;
}


void agregarAsignatura(string asignatura, int cantidad, int uv)
{
    listado = listado + asignatura + '\n';
    totalUv = totalUv + uv;

    if (promedioGlobal >= 90 && promedioGlobal <= 100)
    {
        uvDisponibles = 24 - totalUv;
    } if (promedioGlobal >= 80 && promedioGlobal < 90)
    {
        uvDisponibles = 22 - totalUv;
    } if (promedioGlobal >= 70 && promedioGlobal < 80)
    {
        uvDisponibles = 20 - totalUv;
    } if (promedioGlobal >= 60 && promedioGlobal < 70)
    {
        uvDisponibles = 16 - totalUv;
    }  if (promedioGlobal >= 40 && promedioGlobal < 50)
    {
        uvDisponibles = 14 - totalUv;
    }  if (promedioGlobal >= 0 && promedioGlobal < 40)
    {
        uvDisponibles = 12 - totalUv;
    } else
    {
        cout << "Opcion no valida"  << endl;
    }

}

void clasesAgregadas()
{
    system("cls");
    cout << "\t\tNombre de estudiante: " << nombre;
    cout << endl;
    cout << "\t\tPromedio Global: " << promedioGlobal;
    cout << endl;
    cout << endl;

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



