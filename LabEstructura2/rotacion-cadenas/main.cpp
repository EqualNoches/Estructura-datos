/*
Realice un programa c++ que rote en N caracteres una cadena dada. Se debe aceptar otro parámetro que indique el sentido del rote,
si el rote es es hacie la izquierda o hacia la derecha
*/

#include <iostream>
#include <ostream>
#include <string>
#include <cctype>
using namespace std;


void ValidarElemento(int &n) 
{
    while (!(cin >> n))
    {
        cout << "Porfavor introduzca un valor valido";
        cin.clear();
        cin.ignore(123, '\n');
    }
}


void ValidarCadena(string s) 
{
    while (!(cin >> s))
    {
        cout << "Porfavor introduzca un valor valido";
        cin.clear();
        cin.ignore(123, '\n');
    }
}

void rotateLeft(string &str, int N) {
    int length = str.length();
    N = N % length; // Asegurar que N sea menor que la longitud de la cadena

    for (int i = 0; i < N; ++i) {
        char temp = str[0];
        for (int j = 0; j < length - 1; ++j) {
            str[j] = str[j + 1];
        }
        str[length - 1] = temp;
    }
}


void rotateRight(string &str, int N) {
    int length = str.length();
    N = N % length; // Asegurar que N sea menor que la longitud de la cadena

    for (int i = 0; i < N; ++i) {
        char temp = str[length - 1];
        for (int j = length - 1; j > 0; --j) {
            str[j] = str[j - 1];
        }
        str[0] = temp;
    }
}


void menu(){
    string palabra;
    int N;
    char direction; 

    cout << ("Bienvenido al programa de intercambio de poscición de caracteres")<< endl;
    cout << ("Introduzca la palabra: ");
    cin >> palabra;

    cout << "Ingresa cuantas posciciones quiere que se haga la rotación: ";
    ValidarElemento(N);

    cout << "Ingresa la dirección de rotación (L para izquierda, R para derecha): ";
    cin >> direction;
    
    char directionUpper = toupper(direction);

    switch (directionUpper) {

        case 'R':
            rotateLeft(palabra, N);
            cout << "Cadena rotada hacia la izquierda: " << palabra << endl;
            break;
        case 'L':
            rotateRight(palabra, N);
            cout << "Cadena rotada hacia la derecha: " << palabra << endl;
            break;

    }
}


int main (int argc, char *argv[]) {
    
    cout << ("Iniciando programa");
    menu();    

    return 0;
}

