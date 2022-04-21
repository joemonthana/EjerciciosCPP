#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int alAzar = 0;
    int suma = 0;
    int numeros[5][5];

     srand(time(NULL));
    numeros[0][0] = alAzar = rand() % 9 + 1;
    numeros[0][1] = alAzar = rand() % 9 + 1;
    numeros[0][2] = alAzar = rand() % 9 + 1;
    numeros[0][3] = alAzar = rand() % 9 + 1;
    numeros[0][4] = alAzar = rand() % 9 + 1;

    numeros[1][0] = alAzar = rand() % 9 + 1;
    numeros[1][1] = alAzar = rand() % 9 + 1;
    numeros[1][2] = alAzar = rand() % 9 + 1;
    numeros[1][3] = alAzar = rand() % 9 + 1;
    numeros[1][4] = alAzar = rand() % 9 + 1;

    numeros[2][0] = alAzar = rand() % 9 + 1;
    numeros[2][1] = alAzar = rand() % 9 + 1;
    numeros[2][2] = alAzar = rand() % 9 + 1;
    numeros[2][3] = alAzar = rand() % 9 + 1;
    numeros[2][4] = alAzar = rand() % 9 + 1;

    numeros[3][0] = alAzar = rand() % 9 + 1;
    numeros[3][1] = alAzar = rand() % 9 + 1;
    numeros[3][2] = alAzar = rand() % 9 + 1;
    numeros[3][3] = alAzar = rand() % 9 + 1;
    numeros[3][4] = alAzar = rand() % 9 + 1;

    numeros[4][0] = alAzar = rand() % 9 + 1;
    numeros[4][1] = alAzar = rand() % 9 + 1;
    numeros[4][2] = alAzar = rand() % 9 + 1;
    numeros[4][3] = alAzar = rand() % 9 + 1;
    numeros[4][4] = alAzar = rand() % 9 + 1;

    suma = numeros[0][0] + numeros[0][1] + numeros[0][2] + numeros[0][3] + numeros[0][4] + numeros[1][0] + 
    numeros[1][1] + numeros[1][2] + numeros[1][3] + numeros[1][4] + numeros[2][0] + numeros[2][1] + numeros[2][2] +
    numeros[2][3] + numeros[2][4] + numeros[3][0] + numeros[3][1] + numeros[3][2] + numeros[3][3] + numeros[3][4] +
    numeros[4][0] + numeros[4][1] + numeros[4][2] + numeros[4][3] + numeros[4][4];

    for (int i = 0; i < 5; i++)
    {
        cout << numeros[i][0] << " " << numeros[i][1] << " " << numeros[i][2] << " " << numeros[i][3] << " " << numeros[i][4] << endl;
    }
    cout << endl;
    cout << "La suma total es: " << suma;
    
    return 0;
}
