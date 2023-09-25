#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Numeros Persistentes
    int numeros = 99;
    int persistencia = 0;
    while (numeros > 0)
    {
        int counter = -1;
        int temp = numeros;
        while (temp != 0)
        {
            int primero = (temp / 10);
            int segundo = (temp % 10);
            temp = primero * segundo;
            if (sizeof(temp) < 1)
            {
                break;
            }
            counter++;
        }
        if (counter > 3)
        {
            cout << "El numero unico numero de 2 digitos con una persistencia mayor que 3 es: " << numeros << endl;
            break;
        }
        numeros--;
    }
    return 0;
}
