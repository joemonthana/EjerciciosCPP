#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;

    // inicializa un numero Random
    srand(time(NULL));

    for (size_t i = 1; i < 20; i++)
    {
        // Genera un numero entre uno y 10
    numero = rand() % 10 + 1;

    cout << "Primer numero al azar: " << numero << endl;
    }
    
    return 0;
}
