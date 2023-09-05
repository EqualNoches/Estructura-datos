#include <iostream>

using namespace std;

int Cubed(int i)
{
    int cubo = i * i * i;

    return cubo;
}

int main(int argc, char const *argv[])
{
    int itterations = 0;
    int i = 100;
    while (itterations < 4)
    {

        while (i < 1000)
        {
            int actualNumber = i;
            int answer;
            while (actualNumber > 0)
            {
                actualNumber = actualNumber % 10;
                answer += Cubed(actualNumber);
                actualNumber /= 10;
                cout << answer;
            }

            if (answer == i)
            {
                cout << "Uno de los numeros cubos de narcisista es" << answer << endl;
                itterations++;
            }
            i++;
        }
    }
    return 0;
}
