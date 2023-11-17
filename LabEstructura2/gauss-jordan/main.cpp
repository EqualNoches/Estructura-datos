/*
Dado los coeficientes de un sistema de ecuaciones simultaneas de primer grado de N variables.
Escriba un programa de C++ que permita encontrar las soluciones utilizado el método de Gauss-Jordan.
*/


#include <iostream>

using namespace std;

void imprimirMatriz(int** arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= size; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void imprimirVariables(int** arr, int size){
    cout << "X: " << arr[0][size] << ", ";
    cout << "Y: " << arr[1][size] << ", ";
    cout << "Z: " << arr[2][size] << " ";
}

void hacerCero(int** arr, int size, int fila_pivote, int fila_objetivo, int columna_pivote) {
    // Hacer cero en la columna pivote de la fila objetivo
    int factor = arr[fila_objetivo][columna_pivote];
    for (int j = 0; j <= size; j++) {
        arr[fila_objetivo][j] -= factor * arr[fila_pivote][j];
    }
}

void resolver(int** arr, int size) {
    cout << "Matriz original:" << endl;
    imprimirMatriz(arr, size);

    for (int i = 0; i < size; i++) {
        // Encontrar el pivote en la columna actual
        int fila_pivote = i;
        while (fila_pivote < size && arr[fila_pivote][i] == 0) {
            fila_pivote++;
        }

        if (fila_pivote == size) {
            // No hay pivote en esta columna, pasar a la siguiente columna
            continue;
        }

        // Intercambiar filas si es necesario para tener un pivote en la posición actual
        swap(arr[i], arr[fila_pivote]);

        // Hacer el pivote igual a 1
        int pivote = arr[i][i];
        for (int j = i; j <= size; j++) {
            arr[i][j] /= pivote;
        }

        // Hacer ceros en las otras filas
        for (int k = 0; k < size; k++) {
            if (k != i && arr[k][i] != 0) {
                hacerCero(arr, size, i, k, i);
            }
        }

        cout << "Paso " << i + 1 << ":" << endl;
        imprimirMatriz(arr, size);
    }

    cout << "Matriz escalonada reducida por filas (forma Gauss-Jordan):" << endl;
    imprimirMatriz(arr, size);
    cout << endl;
    imprimirVariables(arr, size);
    cout << endl;
}

void run() {
    int globalSize;

    cout << "Ingresa la cantidad de coeficientes que deseas tener: ";
    cin >> globalSize;

    cout << endl;

    int** matriz = new int*[globalSize];
    for (int i = 0; i < globalSize; ++i) {
        matriz[i] = new int[globalSize + 1];
    }

    for (int row = 0; row < globalSize; row++) {
        for (int col = 0; col < globalSize + 1; col++) {
            if (col == globalSize) {
                cout << "Fila (" << to_string(row + 1) << ") - Columna (" << to_string(col + 1) << ") -Termino independiente- \nIngresa el valor: ";
            } else {
                cout << "Fila (" << to_string(row + 1) << ") - Columna (" << to_string(col + 1) << ") -Coeficiente- \nIngresa el valor: ";
            }

            cin >> matriz[row][col];
        }

        cout << endl;
    }

    resolver(matriz, globalSize);

    // Liberar memoria al finalizar
    for (int i = 0; i < globalSize; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

int main() {
    run();
    return 0;
}
