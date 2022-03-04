#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	//Ler um número inteiro não - negativo N, tal que 1000 ≤ N ≤ 9999, 
	//e imprimir a quantidade de dígitos pares e a quantidade de 
	//dígitos ímpares que compõem aquele número, desprezando - sem os zeros.

	//Variavevis
	int i = 0;
	int p = 0;

	//obtendo a entrada
	int x0;
	cout << "Escreva um valor inteiro entre 1000 e 9999: ";
	cin >> x0;

	//Verificando os dados
	if (x0 < 1000 || x0 > 9999)
	{
		cout << "\n\nNumero errado, programa chegara ao fim.";
	}
	else {

		//Oobtendo os dígitos
		int x2 = floor(x0 / 1000); // primeiro dígito

		int x3 = x0 - (1000 * x2); 
		int x5 = floor(x3 / 100); // segundo

		int x6 = x3 - (100 * x5); 
		int x8 = floor(x6 / 10); // terceiro

		int x9 = x6 - (10 * x8); // quarto

		if (x2 != 0)
		{
			if (x2 % 2 > 0)
			{
				i++;
			}
			else 
			{
				p++;
			}
		}
		if (x5 != 0)
		{
			if (x5 % 2 > 0)
			{
				i++;
			}
			else
			{
				p++;
			}
		}
		if (x8 != 0)
		{
			if (x8 % 2 > 0)
			{
				i++;
			}
			else
			{
				p++;
			}
		}
		if (x9 != 0)
		{
			if (x9 % 2 > 0)
			{
				i++;
			}
			else
			{
				p++;
			}
		}


		cout << "Qtd impar: " << i << "\n";
		cout << "Qtd par  : " << p;
	}

}
