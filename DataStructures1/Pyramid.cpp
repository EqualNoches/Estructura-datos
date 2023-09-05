#include<iostream>

/*
    La piramides del cielo
*/

using namespace std;

int main(int argc, char const *argv[])
{   
    int capas = 0;
    int cantBolas = 10000;
    int bolasUsadas = 0;
    int i = 1;
    int numeroActual = 0;
    while(bolasUsadas < cantBolas)
    {

        if (bolasUsadas + numeroActual > cantBolas)
        {
            break;
        }
        numeroActual = i * i;
        bolasUsadas += numeroActual;
        capas++;
        i++;
    }
    bolasUsadas = cantBolas - bolasUsadas;
    cout<<"La cantidad total de capas fue:"<<capas<<endl<<"La cantidad total de bolas que restantes fue:"<<bolasUsadas<<endl;
    return 0;
}