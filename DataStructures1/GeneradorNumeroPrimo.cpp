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

int main(int argc, char const *argv[])
{
    bool validation = true;
    int choice;
    int number = 2;
    int counter = 1;
    cout << "Cuantos numeros primos quiere que genere este programa?: ";
    isDigit(choice);
    while (choice != 0)
    {

        for (int i = 2; i < number; i++)
        {
            if (number % (i * i) == 0)
            {
                validation = false;
                break;
            }
        }

        if (validation)
        {
            cout <<counter<<". "<< number << endl;
            choice--;
            counter++;
        }
        else
        {
            validation = true;
        }
        number++;
    }
    return 0;
}
