
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

#include <iostream>
#include <cmath>

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


int main(int argc, char const *argv[])
{
    int numfibo = 0;
    int fibo;
    float numerofinal;

    for (int i = 0; i <= 24; i++)
    {
        fibo = fibonacci(numfibo); 
        numerofinal += fibo / pow (2, i);
        numfibo++;
    }
    cout << fibo;
    cout << "Numero para imprimir "<<numerofinal;
    

    return 0;
}

