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

int main(int argc, char const *argv[])
{
    int n;
    cout << "Introduzca un numero para determinar si es primo: ";
    cin >> n;
    if (SiPrimo(n))
    {
        cout << n << " es un numero primo";
    }
    else
    {
        cout << n << " no es primo";
    }

    return 0;
}
