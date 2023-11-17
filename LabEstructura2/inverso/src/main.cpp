//Dado un numero multiplicarlo por el mismo con los digitos en orden inverso

#include <iostream>

using namespace std;

void inverso(int numero)
{
	int tempNumero = numero;
	int inverse=0;
	while(tempNumero > 0)
	{
		inverse = inverse *10 + tempNumero %10;
		tempNumero /=10;
	}
	cout << "El numero a multiplicar es "<< numero <<" por " << inverse;
	int result = numero * numero;
	cout << "El resultado final es " << result<<endl;
}
void ValidarElemento(int &n)
{
	while (!(cin >> n))
	{
		cout << "Porfavor introduzca un valor valido";
		cin.clear();
		cin.ignore(123, '\n');
	}
}

int main()
{
	int entrada;
	cout << "Introduzca el numero a multiplicar";
	ValidarElemento (entrada);
	inverso (entrada);
	return 0;
}

