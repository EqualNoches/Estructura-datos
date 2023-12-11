/*
This program made in C++ prints accurately the year which you choose to print.
This is achieved by using the zeller's algorithm.

This program was Made by Edward Isaac Díaz Campusano
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
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
    int tm_lYear; // leap year
};

int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

void printCalendar(int year)
{
    time_t ttime = time(0);
    tm *local_time = localtime(&ttime);
    int current_year = 1900 + local_time->tm_year;
    int current_month = local_time->tm_mon + 1;
    int current_day = local_time->tm_mday;

    cout << " -----------------------------------\n"
         << "\033[1;33m"
         << "           Calendar - " << year
         << "\033[0m" << endl;
    cout << " -----------------------------------" << endl;

    int days;
    int startLeap;

    int tempY = year - 1;
    startLeap = (tempY + tempY / 4 - tempY / 100 + tempY / 400 + 1) % 7; // zeller algorithm implementation.

    for (int i = 0; i < 12; i++)
    {
        if ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && i == 1)
        { // determine if the February is part of a leap year
            days = 29;
        }
        else
        {
            days = monthDays[i];
        }
        cout << endl;

        if (year == current_year && current_month == i + 1)
        {
            cout << "\033[1;1;32m"
                 << "  ------------" << months[i] << "-------------"
                 << "\033[0m" << endl;
        }
        else if (year < current_year || (year == current_year && i + 1 < current_month))
        {
            cout << "\033[31m"
                 << "  ------------" << months[i] << "-------------"
                 << "\033[0m" << endl;
        }
        else
        {
            cout << "  ------------" << months[i] << "-------------"
                 << endl;
        }

        if (year < current_year || (year == current_year && i + 1 <= current_month))
        {
            cout << "\033[35m"
                 << "  Sun"
                 << "\033[0m";
            cout << "\033[1;33m"
                 << "  Mon  Tue  Wed  Thu  Fri ";
            cout << "\033[35m"
                 << "  Sat"
                 << "\033[0m" << endl;
        }
        else
        {
            cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;
        }
        int k;
        for (k = 0; k < startLeap; k++)
            cout << "     ";

        for (int j = 1; j <= days; j++)
        {
            k++;
            if (year == current_year && current_month == i + 1 && current_day == j)
            {
                cout << "\033[1;1;32m" << setw(5) << j << "\033[0m";
            }
            else if (year < current_year || (year == current_year && i + 1 < current_month) || (year == current_year && i + 1 == current_month && j < current_day))
            {
                cout << "\033[31m" << setw(5) << j << "\033[0m";
            }
            else
            {
                cout << setw(5) << j;
            }
            if (k > 6)
            {
                k = 0;
                cout << endl;
            }
        }
        if (k)
            cout << endl;
        startLeap = k;
    }
}

/// @brief confirm if this conditional is a digit by macking the "cin" inside of the function
/// @param i
/// @return if is going to check if the operation is successfull
void validInput(int &i)
{
    while (!(cin >> i))
    {
        cout << "Porfavor introduzca un valor valido.";
        cin.clear();
        cin.ignore(122, '\n');
    }
}

void menu()
{
    while (true)
    {
        int year;
        int confirmation; // This will validate if continue or exit

#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
        cout << "Bienvenido al programa de calendario" << endl;
        cout << "En este programa podran llamar a que se muestre cualquier calendario de este año" << endl;

        cout << "Porfavor seleccione el año que desea mostrar: ";
        cin >> year;

        if (cin.fail())
        {
            cout << endl
                 << "Incorrect Input" << endl
                 << endl;
            exit(0);
        }
        else
        {
            printCalendar(year);
            cout << endl
                 << "continue: '1'\nexit: '0'\nchoice(0,1): ";
            validInput(confirmation);
            switch (confirmation)
            {
            case 0:
                exit(0);
                break;
            case 1:
                continue;
            default:
                cout << "Introduzca un valor valido." << endl;
                confirmation = 0;
                break;
            }
        }
    }
}
    int main(int argc, char const *argv[])
    {
        cout << "Inicializando programa";
        menu();
        return 0;
    }
