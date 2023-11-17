#include <iostream>

using namespace std;

void espacio(int n) {
    for (int i = 0; i < n; i++) {
        cout << " ";
    }
}

void rombos(int t) {
    int x, y, k, suc, i = 0;

    for (x = 0; x < t; x++) {
        if (x < t / 2) {
            k = t / 2 - x;
            espacio(k);
        }
        else {
            k = x - t / 2;
            espacio(k);
        }
        suc = 2 * i + 1;
        for (y = 0; y < 2 * suc; y++) {
            cout << "*";

            if (y == suc - 1) {
                espacio(2 * k); 
            }
        }
        if (x < t / 2) {
            i++;
        }
        else {
            i--;
        }
        cout << endl;
    }
}

int main() {
    int size = 9;

    rombos(size);

    return 0;
}