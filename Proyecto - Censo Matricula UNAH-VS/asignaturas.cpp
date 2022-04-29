#include <iostream>
#include <cstdlib>

using namespace std;

extern void agregarAsignatura(string asignatura, int cantidad, int uv);
extern void departamento();

void asignaturas(int option)

{
    system("cls");
    int opcionAsignatura = 0;
    switch (option)
    {
    case 1:
        cout << "\t\tINFORMATICA ADMINISTRATIVA" << endl;
        cout << "\t\tClases Disponibles" << endl;
        cout << endl;
        cout << "\t\t1 - IA054 Taller de Hardware II" << endl;
        cout << "\t\t2 - IA065 Lenguaje de Programacion II" << endl;
        cout << "\t\t3 - IA-075 Sistemas Operativos I" << endl;
        cout << "\t\t4 - IA-106 Base de Datos I" << endl;
        cout << "\t\t5 - Regresar" << endl;
        cout << endl;
        cout << "\t\tElija una opcion: ";
        cin >> opcionAsignatura;

        switch (opcionAsignatura)
        {
        case 1:
            agregarAsignatura("\t\tIA054 - Taller de Hardware II - 4 UV", 1, 4);
            break;

        case 2:
            agregarAsignatura("\t\tIA065 Lenguaje de Programacion II - 4 UV", 1, 4);
            break;
        case 3:
            agregarAsignatura("\t\tIA-075 Sistemas Operativos I - 4 UV", 1, 4);
            break;
        case 4:
            agregarAsignatura("\t\tIA-106 Base de Datos I - 4 UV", 1, 4);
            break;
        case 5:
            departamento();
        
        default:
        {
            cout << "\t\tOpcion no valida";
            return;
            break;
        }
        
        }
        system("cls");
        cout << endl;
        cout << "\t\tClase Agregada" << endl << endl;
        cout << endl;
        system("pause");
        
    default:
        break;
    }
}