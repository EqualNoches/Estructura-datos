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
            int numberExtract = i;
            int answer = 0;
            while (numberExtract != 0)
            {
                int actualNumber = numberExtract % 10;
                answer += Cubed(actualNumber);
                numberExtract /= 10;
            }

            if (answer == i)
            {
                cout << "Uno de los numeros cubos de narcisista es: " << answer << endl;
                itterations++;
            }
            if (i > 1000)
            {
                break;
            }
            i++;
        }
    }
    return 0;
}
