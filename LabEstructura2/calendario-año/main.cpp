/*
This program made in C++ prints accurately the year which you choose to print.
This is achieved by using the zeller's algorithm.

This program was Made by Edward Isaac Díaz Campusano
*/

#include <iostream>
using namespace std;

struct time_struct
{
    int tm_sc;
    int tm_min;
    int tm_hr;
    int tm_mDay;
    int tm_week;
    int tm_month;
    int tm_wDay;
    int tm_yDay;
    int tm_year;
    int tm_lYear;  //leap year
};

int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
static string months[] = {"January", "February", "March", "April", "May", "July", "August", "September", "October", "November", "December"};

void printCalendar()
{
}
void menu()
{
    while (true)
    {
        int year;
        cout << "Bienvenido al programa de calendario" << endl;
        cout << "En este programa podran llamar a que se muestre cualquier calendario de este año" << endl;

        cout << "Porfavor seleccione el año que desea mostrar: ";
        cin >> year;

        if (cin.fail())
        {
            break;
        }
        else
        {
            printCalendar();
        }
    }
}

int main(int argc, char const *argv[])
{
    cout << "Inicializando programa";
    menu();
    return 0;
}
