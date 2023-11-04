/*
Escribir un programa c++ utilizando solo un ciclo for/while de manera que
se produzca el patron mostrado imprima solamente un asterisco a la vez
*/

#include <iostream>
using namespace std;

int main(void) {
  int fila = 25;
  while (fila > 0) {

    if (fila % 5 == 0) {
      cout << "\n";
    }
    cout << "*";
    fila--;
  }
  cout << endl;
}