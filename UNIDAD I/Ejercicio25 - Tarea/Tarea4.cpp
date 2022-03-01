#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares = 0;
    int totalParesImpares = 0;
    for (int i = 1; i <= 10; i++)
    {
        if ( i % 2 == 0) {
            pares = pares + i;
        }
        cout << i << " ";
    }

    cout << endl;
    cout << endl;
    cout << "Total de pares: " << pares;

    cout << endl;
    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        if ( i % 2 == 1) {
            impares = impares + i;
        }
        cout << i << " ";
    }

    cout << endl;
    cout << endl;
    cout << "Total de mpares: " << impares;

    cout << endl;
    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        if ( i % 1 == 0) {
            totalParesImpares = totalParesImpares + i;
        }
        cout << i << " ";
    }

    cout << endl;
    cout << endl;
    cout << "Total de pares e impares: " << totalParesImpares;

    
    return 0;
}
