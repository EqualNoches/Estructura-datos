#include <iostream>
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
void isPrime()
{

}

int main(int argc, char const *argv[])
{
    int choice;
    cout << "Cuantos numeros primos quiere que genere este programa?";
    isDigit(choice);
    
    return 0;
}
