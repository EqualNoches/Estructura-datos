#include <iostream>
using namespace std;

int squared(int i)
{
    int squared = i * i;
    return squared;
}
int main(int argc, char const *argv[])
{
    int itterarions = 1;
    int counter = 0;
    while (itterarions < 500)
    {
        int number = squared(itterarions);
        int LastDigitSquared = number % 10;
        int Last2DigitSquared = number % 100;
        int Last3DigitSquared = number%1000;
        if (itterarions < 10)
        {
            if (number == LastDigitSquared)
            {
                cout << itterarions << endl;
                counter++;
            }
        }
        else if (itterarions > 10 && itterarions < 100)
        {
            if (itterarions == Last2DigitSquared)
            {
                cout << itterarions << endl;
                counter++;
            }
        }
        else
        {
            if (itterarions == Last3DigitSquared)
            {
                cout << itterarions<<endl;
                counter++;
            }
            
        }
        itterarions++;
    }
    cout << "El señor tiene " << counter << " camiones";

    return 0;
}
