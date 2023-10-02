#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int TotalCoins = 7869, Paid = 0;

    for (int senators = 0; senators < 100; senators++)
    {
        for (int congressmen = 0; congressmen < 100; congressmen++)
        {
            int guest = 100 - senators - congressmen;
            Paid = (senators * 75) + (congressmen * 99) + (guest * 40);

            if (Paid == TotalCoins && guest >= 0)
            {
                cout << "La cantidad de senadores fue: " << senators << endl
                     << "La cantidad de congresistas fue: " << congressmen << endl
                     << "La cantidad de invitados fue: " << guest << endl;

                return 0;
            }
        }
    }
}
