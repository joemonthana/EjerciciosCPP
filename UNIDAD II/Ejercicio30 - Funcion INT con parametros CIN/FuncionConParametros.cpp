#include <iostream>
using namespace std;

int sumar(int a, int b) {
    return a + b;
}
int restar(int a, int b) {
    return a - b;
}

int main(int argc, char const *argv[])
{
    system("cls");
    int num1 = 0;
    int num2 = 0;
    cout << "Ingrese el valor 1: ";
    cin >> num1;
    cout << endl;
    cout <<"Ingrese el valor 2: ";
    cin >> num2;
    cout << endl;
    cout << " El resultado de la suma es: " << sumar(num1, num2);
    cout << endl;
    cout << " El resultado de la resta es: "<< restar(num1, num2);
    return 0;
}
