#include <iostream>

using namespace std;


double subtotal;
string listaProductos;

void agregarProductos(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}