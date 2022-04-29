#include <iostream>

using namespace std;

extern void asignaturas(int option);
extern void clasesAgregadas();

void departamento()
{
    int option = 0;

    while (true)
    {
        system("cls");

        cout << "*****";
        cout << "DEPARTAMENTOS DISPONIBLES";
        cout << "*****";
        cout << endl;

        cout << "1 - Informatica Administrativa" << endl;
        cout << "2 - Lenguas extranjeras" << endl;
        cout << "3 - Metodos cuantitativos" << endl;
        cout << "4 - Mostrar clases Agregadas" << endl;
        cout << "5 - Salir" << endl;
        cout << endl;

        cout << "Ingrese un departamento: ";
        cin >> option;

        if (option == 0)
        {
            break;
        }
        if (option == 4)
        {
            clasesAgregadas();
        } 
        if (option == 5)
        {
            break;
        }
        else
        {
            asignaturas(option);
        }

        asignaturas(option);

    }
    

}