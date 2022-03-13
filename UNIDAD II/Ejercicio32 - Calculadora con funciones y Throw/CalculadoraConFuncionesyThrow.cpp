#include <iostream>
using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int calculadora(int a, int b, char operador) {
    if (operador == '+') {
        return sumar(a, b);
    }
    throw "El operador no es valido";
}

int main(int argc, char const *argv[])
{
    int resultado = 0;
    int num1 = 0;
    int num2 = 0;
    char  operador;

    cout << "Ingrese el valor 1: ";
    cin >> num1;
    cout << endl;
    cout << "Ingrese el valor 2: ";
    cin >> num2;
    cout << endl;
    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;
    cout << endl;

    try
    {
        resultado = calculadora(num1, num2, operador);
        cout << "La suma de " << num1 << " " << operador << " " << num2 << " es: ";
        cout << resultado;
        
    }
    catch(const char* error)
    {
        cout << error;
    }
    

    
    return 0;
}
