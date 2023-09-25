#include <iostream>
#include <math.h>
using namespace std;

bool SiPrimo(int n)
{
    bool sp = true;
    int k = 1, i = 2, lim;
    lim = (int)sqrt(n);
    while (i <= lim && sp == true)
    {
        if (n % i == 0)
            sp = false;
        i = 2 * k + 1;
        k++;
    }
    return sp;
}
void DeterminarFactores(int factor)
{
    cout << "Los valores primos de " << factor << " son:  ";
    for (int i = 2; i < factor; i++)
    {
        if (factor % i == 0)
        {
            if (SiPrimo(i))
            {
                cout << i << " ";
            }
        }
    }
}

void isDigit(int &i)
{
    while (!(cin >> i))
    {
        cout << "Porfavor introduzca un valor valido.";
        cin.clear();
        cin.ignore(123, '\n');
    }
}

int main(int argc, char const *argv[])
{
    int numero;
    cout << "Diga el numero del cual quiere saber sus factores primos: ";
    isDigit(numero);
    DeterminarFactores(numero);

    return 0;
}
