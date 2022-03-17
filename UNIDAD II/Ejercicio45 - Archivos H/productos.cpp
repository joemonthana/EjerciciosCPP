#include <iostream>
#include "factura.h"

using namespace std;

void productos(int opcion)
{
    system("cls");
    int opcionProducto = 0;
    switch (opcion)
    {
    case 1:
    {
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "********" << endl;
            cout << "1 - Capuccino" << endl;
            cout << "2 - Expresso" << endl;
            cout << endl;
            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProductos("1 Capuccino - L 40.00", 1, 40);
                break;
            case 2:
                agregarProductos("1 Expresso - l 30.00", 1, 30);
                break;
            
            default:
            {
            cout << "Opcion no valida";
                return;
                break;
            }
            }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        cout << endl;
        system("pause");

        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        system("pause");
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        system("pause");
        break;
    }
    default:
        break;
    }
}