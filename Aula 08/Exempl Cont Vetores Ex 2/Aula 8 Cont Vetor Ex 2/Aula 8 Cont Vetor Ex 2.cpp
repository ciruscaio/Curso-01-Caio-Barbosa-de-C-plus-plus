#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	//Monte um vetor de inteiros de 121 até 1121.
	int v[1001];

	//Preencher
	for (int i = 0; i < 1001; i++)
	{
		v[i] = 121 + i;

		cout << v[i] << "\n";
	}


	//Soma dos elementos
	int soma = 0;
	for (int i = 0; i < 1001; i++)
	{
		soma = soma + v[i];
	}
	cout << "\n\n\nTotal: " << soma;


	//Soma dos elementos pares, ímpares
	int soma_par = 0;
	int soma_impar = 0;
	for (int i = 0; i < 1001; i++)
	{
		if ((v[i] % 2) == 0)
		{
			//se entrar no if é pq é par

			soma_par = soma_par + v[i];
		}
		else
		{
			soma_impar = soma_impar + v[i];
		}
	}
	cout << "\nPar  : " << soma_par;
	cout << "\nIPar : " << soma_impar;
	cout << "\nProva: " << (soma_par + soma_impar);


	//Qual a média aritmetica?
	float media = (soma / 1001);
	cout << "\nMedia: " << media;


	//Faça um motor para encontrar o índice de um elemento determinado pelo usuário
	cout << "\nEscreva um inteiro entre 121 e 1121 para conhecer o indice: ";
	int escolhausu = 0;
	cin >> escolhausu;

	for (int i = 0; i < 1001; i++)
	{
		if (v[i] == escolhausu)
		{
			cout << "\nO indice e: " << i;
		}
	}

}
