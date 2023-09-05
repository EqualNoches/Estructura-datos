
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <random>
#include <string.h>
#include <string>
#include <sstream>

using namespace std;

int asignacionNumeros(int MasterMind[10][3]);
int Question(int guess, int MasterMind[10][3]);


int main()
{
    //bidemensional Array for storing the tries of every user
    int MasterMind[10][3];
    int guess;

    //Code for main Menu
    cout << "                       \n**********Hola, Bienvenido a Mastermind (Nivel Principiante)**********\n"<<endl;
    
    cout << "Reglas del juego: Master Mind es un juego que consiste en adivinar 4 números ocultos."
            "Los números están en un rango de 1 a 6.\n\nTendra 10 intentos para adivinar a clave oculta"
            "de 4 números(o dígitos) entre 1 y 6."<<endl;
    
    cout << "En pantalla le pueden llegar a salir 3 signos.\n"
            "\n ************Una X, una C y una F************ \n\n";

    cout << "Estos tienen un significado que es."
        "\na. X si el digito no estás en la clave seleccionada\n"
        "b. C si el digito est� en la misma posici�n que la clave, es decir, frente a frente.\n"
        "c. F si el digito est� en la clave seleccionada pero no en la posici�n correcta.\n" << endl;

    cout << "Presione cualquier tecla para inicar: ";
    
    _getch();

    cout << "\x1B[2J\x1B[H"; //Clear screen and move cursor to top - left corner

    cout << "Haga su primer intento";cin >> guess;
    // Question(guess, MasterMind);


    _getch();
    return 0;
}

int asignacionNumeros(int MasterMind[10][3])
{
    cout << "\x1B[2J\x1B[H"; //Clear screen and move cursor to top - left corner
    random_device rd; //initialize the seed (a seed is like a different type of push when you speen a wheel)
    mt19937 generate(rd()); //initialize the engine of the randomizer (engine is called Mersenne twister)
    uniform_int_distribution<int> uni(1, 6);

    for (int i = 0; i < 4;i++)
    {
        while (MasterMind[0][i] == MasterMind[0][i - 1] || MasterMind[0][i] == MasterMind[0][i - 2] || MasterMind[0][i] == MasterMind[0][i - 3] || MasterMind[0][i] == MasterMind[0][i - 4])
        {
            int randomNumber = uni(generate);
            MasterMind[0][i] = randomNumber;
        }
    }
    _getch();
    return 0;
}

int Question(string guess, int MasterMind[10][3])
{
    cout << "\x1B[2J\x1B[H"; //Clear screen and move cursor to top - left corner
    stringstream divisionString;
    divisionString << guess;
    int i = 0;
    // for (int i = 0;i < 4; i++)
    // {
    //     while (guess[i] == MasterMind[i][0])
    //     {
            
    //     }
        
    // }
    // if (i==0)
    // {

    // }

    _getch();
    return 0;
}
