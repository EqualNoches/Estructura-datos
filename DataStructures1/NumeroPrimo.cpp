#include <iostream>
#include <stdio.h>
using namespace std;

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
    int number;
    bool validation = true;
    cout << "Identificar si un numero es primo: ";
    isDigit(number);
    for (int i = 2; i < number; i++)
    {
        if (number % (i * i) == 0)
            validation = false;
        break;
    }
    if (validation)
    {
        cout << "El numeros es primo" << endl;
    }
    else
    {
        cout << "El numero no es primo" << endl;
    }
    return 0;
}
