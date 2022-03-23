#include <iostream>
#include <math.h>

using namespace std;

void raizCuadrada() {

    int numero = 0;
    int resultado = 0;
    
    cout << "Ingrese un numero: ";
    cin >> numero;
     
     resultado = sqrt(numero);
     
    cout << endl;
     cout << "La raiz cuadrada de " << numero << " " << "es" << " " << resultado;
}