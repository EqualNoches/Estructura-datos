#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "De cuantos pisos quieres que sea la pyramide: ";
    cin >> n;
    int cantSpc = n - 1;        //space quantity
    int cantHsh = n - cantSpc;  //hash quantity
    for (int i = 1; i <= n; i++)
    {        
        //spaces
        for (int j = 1; j <= cantSpc; j++)
        {
            cout << (" ");
        }

        // for floor
        for (int k = 1; k <= cantHsh; k++)
        {
            cout << ("*");
        }
        cout << " ";
        cout << ("\n");

        cantSpc--;
        cantHsh++;
    }
    return 0;
}
