#include <iostream>
using namespace std;

int sumar() {
    return 5 + 7;
}

string nombreCompleto() {
    string nombre = "Juan";
    string apellido = "Perez";
    return nombre + " " + apellido;
}

int main(int argc, char const *argv[])
{
    int resultado = 0;
    string nombreyApellido;
    resultado = sumar();
    nombreyApellido = nombreCompleto();
    cout << resultado;
    cout << endl;
    cout << nombreyApellido;
    return 0;
}
