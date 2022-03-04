#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string nomes_colunas[]	     = { "A", "B", "C", "D", "F", "G", "H", "I", "J" };
	float peso_maximo_colunas[] = { 12,18,20.5,21,13,12.6,6.8,9.4,10 };

	//Perguntar ao usuário qual coluna ele quer consnultar o peso
	string escolha;
	cout << "Qual coluna voce quer consultar o peso [A ate J]: ";
	cin >> escolha;

	cout << "\nO valor maximo da coluna escolhida e: ";
	//Descubra qual o peso suportado pela coluna B, no  máximo
	for (int i = 0; i < 9; i++)
	{
		if (nomes_colunas[i] == escolha)
		{
			cout << peso_maximo_colunas[i];
		}
	}

	cout << "\n\n\n\n\n\n";

}
