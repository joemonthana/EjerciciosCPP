#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>

using namespace std;
extern void datos();


int main(int argc, char const *argv[])
{
    string cuenta;
    string clave;
    int contador = 0;
    bool login = false;

    do
    {
        system("cls");
        cout << "***** INGRESE CUENTA Y CLAVE PARA ACCESAR A LA PLATAFORMA *****" << endl;
    cout << endl;
    cout << "Cuenta: "; cin >> cuenta;
    cout << "Clave: ";
    char ocultarClave;
    ocultarClave = getch();
    clave = "";

    while (ocultarClave != 13)
    {
        clave.push_back(ocultarClave);
        cout << "*";
        ocultarClave = getch();
    }
    
    cout << endl;

    system("cls");
    if (cuenta == "20182031405" && clave == "1234") {
        login = true;
    } else {
        cout << "*****ERROR DE USUARIO O CONTRASENA****" << endl;
        cin.get();
        contador++;
    }
    } while (login == false && contador < 3);
    if (login == false )
    {
        cout << "*****USTED PASO EL LIMITE DE INTENTOS*****" << endl;
    }
    else
    {
        cout << "*****BIENVENIDO AL CENSO DE MATRICULA DE UNAH-VS" << endl;
        cout << endl;
        datos();

    }
    

    return 0;
}
