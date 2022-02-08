#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;

    cout <<"Ingrese el subtotal: ";
    cin >> subtotal;
    cout << endl;
    cout <<"Ingrese el decuento (0 ,15, 15, 20): ";
    cin >> descuento;

    calculoDescuento = (subtotal* descuento) / 100;
    calculoImpuesto = (subtotal - calculoDescuento) * impuesto;
    total = subtotal - calculoDescuento + calculoImpuesto;
    cout <<"El total a pagar es: " << total;
    return 0;
}
