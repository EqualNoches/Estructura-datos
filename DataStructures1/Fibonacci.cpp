#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n-2);
    }
}

void isDigit(int &i)
{
    while (!(cin >> i))
    {
        cout << "Porfavor introduzca un valor valido.";
        cin.clear();
        cin.ignore(123, '\n');
    }
}

int main(int argc, char const *argv[])
{
    int fibonacciNumber = 0;
    int contador;
    cout << "Ejercicio de Fibonacci\n Diga la cantidad de veces que quiera que se repita este ciclo.";
    isDigit(contador);
    for (int i = 0; i <= contador; i++)
    {
        int fibo = fibonacci(fibonacciNumber);
        cout<< i <<" | "<< fibo<<endl; 
        fibonacciNumber++;
    }


    return 0;
}
