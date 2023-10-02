#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int hour = 01;
    int counterClashes = 1, counter = 1;
    int extrasecs = 00;
    int extramins = 00;
    int encounterMins, encounter;
    cout << "Las agujas chocan a las: " << endl;
    while (hour < 11)
    {
        int extrahour = hour;
        extramins += 05;
        extrasecs += 27;
        if (extrasecs > 50)
        {
            extrasecs %= 60;
            extramins++;
        }
        if (extramins > 59)
        {
            extramins %= 60;
            extrahour++;
        }
        int superPosition = (((extrahour * 100) + extramins) * 100) + extrasecs;
        cout << counter << ". " << extrahour << ":" << extramins << ":" << extrasecs << endl;
        if (hour + 1 == 7)
        {
            encounterMins = extramins - 18;
            encounter = (((extrahour * 100) + encounterMins) * 100) + extrasecs;
        }
        counter++;
        hour++;
    }

    cout << "Quedaron para encontrarse a las: " << encounter << endl;
    cout << "Las manecillas del reloj se sobre ponen: " << counter*2 << " veces." << endl;
    return 0;
}
