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

        if (opcion == 0){
            break;
        }

        switch (opcion)
        {
        case 1:
        { 
            system("cls");
            cout << "Estas en el menu de cafe y granitas" << endl;
            system("pause");   
            break;
        }
        case 2:
        { 
            system("cls");
            cout << "Estas en el menu de resposteria" << endl;
            system("pause");   
            break;
        }
        default:
        {
        cout << "Ingrese una opcion valida (0 1 y 2)" << endl;
            break;
            system("pause");
        }
        }
            
    } 
    
    cout << "Saliste del sistema" << endl;

    return 0;
}
