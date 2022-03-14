#include <iostream>

using namespace std;

extern void agregarProductos(string descripcion, int cantidad, double precio);

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
            cout << "********" << endl;
            cout << "1 - Granita de cafe" << endl;
            cout << "2 - Granita de fresa" << endl;
            cout << endl;
            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProductos("1 Granita de cafe - L 45.00", 1, 45);
                break;
            case 2:
                agregarProductos("1 Granita de fresa - L 35.00", 1, 35);
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
    case 3:
    {
        cout << "REPOSTERIA" << endl;
            cout << "********" << endl;
            cout << "1 - Brownie" << endl;
            cout << "2 - Muffins" << endl;
            cout << endl;
            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProductos("1 Brownie - L 50.00", 1, 50);
                break;
            case 2:
                agregarProductos("1 Muffins - l 25.00", 1, 25);
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
    default:
        break;
    }
}