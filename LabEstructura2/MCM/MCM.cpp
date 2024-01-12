#include <iostream>

using namespace std;

int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    int mcd = calcularMCD(num1, num2);

    cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd << endl;

    return 0;
}