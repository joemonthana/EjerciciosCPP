#include <iostream>

using namespace std;

extern void asignaturas(int option);
extern void clasesAgregadas();
extern void datos();

void departamento()
{
    int option = 0;

    while (true)
    {
        system("cls");
        cout << endl;
        cout << "\t\tDEPARTAMENTOS DISPONIBLES";
        cout << endl;

        cout << "\t\t1 - Informatica Administrativa" << endl;
        cout << "\t\t2 - Lenguas extranjeras" << endl;
        cout << "\t\t3 - Metodos cuantitativos" << endl;
        cout << "\t\t4 - Mostrar clases Agregadas" << endl;
        cout << "\t\t5 - Regresar" << endl;
        cout << "\t\t6 - Salir" << endl;
        cout << endl;

        cout << "\t\tIngrese una opcion: ";
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
            system("cls");
            datos();
        }
        if (option == 6)
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