#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int max = 1;
    int par;
    while (par < 1000)
    {
        bool factor = false;
        par = max * 2;
        int number = 0;
        for (int i = 1; i < par; i++)
        {
            if (int temp = (par % i) == 0)
            {
                number += i;
            }
        }
        if (number == par)
            factor = true;
        if (factor)
        {
            cout << par << " Es un numero Perfecto" << endl;
        }

        max++;
    }

    return 0;
}
