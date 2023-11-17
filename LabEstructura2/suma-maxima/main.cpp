#include <iostream>
#include <vector>
#include <limits>

int maxSumCross(const std::vector<int>& arr, int low, int mid, int high) {
    // Encontrar la suma máxima del subarreglo que cruza el medio
    int leftSum = std::numeric_limits<int>::min();
    int sum = 0;
    for (int i = mid; i >= low; --i) {
        sum += arr[i];
        leftSum = std::max(leftSum, sum);
    }

    int rightSum = std::numeric_limits<int>::min();
    sum = 0;
    for (int i = mid + 1; i <= high; ++i) {
        sum += arr[i];
        rightSum = std::max(rightSum, sum);
    }

    return leftSum + rightSum;
}

int maxSumDivide(const std::vector<int>& arr, int low, int high) {
    if (low == high) {
        // Caso base: solo hay un elemento en el subarreglo
        return arr[low];
    }

    // Encontrar el medio del subarreglo
    int mid = (low + high) / 2;

    // Calcular la suma máxima en el subarreglo izquierdo y derecho recursivamente
    int leftMax = maxSumDivide(arr, low, mid);
    int rightMax = maxSumDivide(arr, mid + 1, high);
    int crossMax = maxSumCross(arr, low, mid, high);

    // Devolver la máxima entre las sumas de los subarreglos izquierdo, derecho y cruzado
    return std::max(std::max(leftMax, rightMax), crossMax);
}

int maxSum(const std::vector<int>& arr) {
    int length = arr.size();

    if (length == 0) {
        // Manejar el caso de matriz vacía
        return 0;
    }

    // Llamar a la función de "divide y vencerás" para encontrar la suma máxima
    return maxSumDivide(arr, 0, length - 1);
}

int main() {
    // Ejemplo de matriz de números enteros
    std::vector<int> matrix = {2, -4, 1, 9, -6, 7, -3};

    // Calcular la suma máxima del subarreglo
    int result = maxSum(matrix);

    // Imprimir el resultado
    std::cout << "La suma maxima del subarreglo es: " << result << std::endl;

    return 0;
}