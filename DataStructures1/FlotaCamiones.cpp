#include <iostream>
using namespace std;

int squared(int i)
{
    int squared = i*i;
    return squared;
}
int main(int argc, char const *argv[])
{
    int itterarions = 0;
    int counter =0;
    while (itterarions < 500)
    {
        int number = squared(itterarions);
        int LastDigitNumber = itterarions%10;
        int LastDigitSquared = number%10;
        if (LastDigitNumber == LastDigitSquared)
        {
            cout << "Uno de los numeros de la flota de camiones era "<<itterarions<<" y el numero cuadrado es "<<number<<endl;
            counter++;
        }
        itterarions++;
    }
    cout<<"El señor tiene " << counter << " camiones";
    
    return 0;
}
