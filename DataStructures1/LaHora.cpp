#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int Hour = 1;
    int temp;
    bool Bingo = true;
    while (Hour <= 24)
    {
        for (int Minutes = 1; Minutes <= 60; Minutes++)
        {
            temp = (Hour * Hour) + (Minutes * Minutes);
            int HourTemp = temp / 100;
            int MinuteTemp = temp % 100;
            if (Hour == HourTemp && Minutes == MinuteTemp)
            {
                cout << "El tiempo que cumple esta propiedad es: " << Hour << ":" << Minutes << endl;
                break;
            }
        }

        Hour++;
    }

    return 0;
}
