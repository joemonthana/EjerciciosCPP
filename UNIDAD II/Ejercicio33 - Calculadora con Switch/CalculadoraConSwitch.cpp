#include <iostream>
using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    if ( b == 0) {
        throw "No se puede dividir entre 0";
    }

    return a / b;
}

int calculadora(int a, int b, char operador) {
    
    switch (operador)
    {
    case '+':
    return sumar(a, b);
        break;
    case '-':
    return restar(a, b);
        break;
    case '*':
    return multiplicar(a, b);
        break;
    case '/':
    return dividir(a, b);
        break;
    
    default:
        break;
    }

    throw "El operador no es valido";

    }


int main(int argc, char const *argv[])
{
    system("cls");
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
        cout << "El resultado de " << num1 << " " << operador << " " << num2 << " es: ";
        cout << resultado;
        
    }
    catch(const char* error)
    {
        cout << error;
    }
    

    
    return 0;
}
