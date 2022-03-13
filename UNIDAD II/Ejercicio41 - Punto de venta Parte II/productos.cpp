#include <iostream>

using namespace std;

void productos(int opcion)
{
    system("cls");
    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
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