#include <iostream>
using namespace std;

int biggest;
bool par(int number)
{
    if (number % 2 == 0)
        return true;
    else
        return false;
}

void Chain(int number, int itterations)
{
    if (number == 4)
    {
        biggest = itterations;
    }
    else if (number % 2 == 0)
    {
        itterations++;
        return Chain(number / 2, itterations);
    }
    else
    {
        itterations++;
        return Chain(number * 3 + 1, itterations);
    }
}

int main(int argc, char const *argv[])
{
    int count = 1;
    int counter;
    int numBig;
    int temp = 0;
    while (count < 99)
    {
        counter = 0;
        Chain(count, counter);
        if (biggest > temp)
        {
            numBig = count;
            temp = biggest;
        }
        count++;
    }
    cout << "El numero con la cadena mas grande es " << numBig << " con una cadena de " << temp << endl;
    return 0;
}
