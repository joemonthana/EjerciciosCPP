#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Entrada
    int a = 0;
    int b = 0;
    int resultado = 0;

    cout <<" Ingrese el valor de A: ";
    cin >> a;
    cout << endl;
    cout <<" Ingrese el valor de B: "; 
    cin >> b;
    cout << endl;

    //Proceso
    resultado = a + b;

    //Salida
    cout << endl;
    cout <<"La suma de a + b es: " << resultado;

    
    return 0;
}
