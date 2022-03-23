#include <iostream>
#include "factura.h"

using namespace std;
double granTotal = 0;
double impuesto = 0;
double subtotal;
string listaProductos;

void agregarProductos(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
    granTotal = subtotal + impuesto;
}

void imprimirFactura()
{
    system("cls");
    cout << "********" << endl;
    cout << "FACTURA" << endl;
    cout << "********" << endl;
    cout << endl;

    cout << "Productos: " << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << "Impuesto: " << impuesto;
    cout << endl;
    cout << "Gran total: " << granTotal;
    cout << endl;
    cout << endl;
    system("pause");
}