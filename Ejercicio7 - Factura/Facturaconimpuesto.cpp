#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;

    cout <<"Ingrese el subtotal: ";
    cin >> subtotal;
    cout << endl;

    total = subtotal + (subtotal * impuesto);

    cout <<"El total a pagar es: " << total;
    return 0;
}
