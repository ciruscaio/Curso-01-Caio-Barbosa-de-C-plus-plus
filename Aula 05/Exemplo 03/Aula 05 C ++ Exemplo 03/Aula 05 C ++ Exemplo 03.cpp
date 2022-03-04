#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

	//Imprimir ímpares até o valor que o usuário escolher


	//Obter o valor do usuário
	int valor;
	cout << "Escreva um valor inteiro para que sejam impressos todos os impares ate o mesmo: ";
	cin >> valor;

	//Imprimir na tela
	cout << "\n\n\n";
	for (int i = 0; i <= valor; i++)
	{
		if (i % 2 == 0) //par
		{
			cout << i << " e par \n";
		}
		else 
		{
			cout << i << " e impar \n";
		}
	}

}

