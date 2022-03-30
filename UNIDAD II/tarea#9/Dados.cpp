#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int dado1 = 0;
    int dado2 = 0;

    srand(time(NULL));

    for (size_t i = 0; i < 1; i++)
    {
        dado1 = rand() % 6 + 1;
        dado2 = rand() % 6 + 1;

        cout << " El resultado del dado 1 es: " << dado1 << endl;
        cout << " El resultado del dado 2 es: " << dado2 << endl;
    }
    

    return 0;
}
