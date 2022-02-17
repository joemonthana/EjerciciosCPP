#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;
    while (true)
    {
        cout << "*****" << endl;
        cout << "MENU" <<endl;
        cout << "*****" <<endl;

        cout << " 1 - Cafe y granitas" << endl;
        cout << " 2 - Reposteria" << endl;
        cout << " 3 - Salir" <<endl;

        cout << "Ingrese una opcion" << endl;
        cin >> opcion;

        if (opcion == 1){
            system("cls");
            cout << "Estas en el menu de cafe y granitas" << endl;
            system("pause");
        } else {
            if (opcion == 2)
            system("cls");
            cout << "Estas en el menu de Reposteria" <<endl;
            system("pause");
        } else {
            break;
        }
    }
    
    return 0;
}
