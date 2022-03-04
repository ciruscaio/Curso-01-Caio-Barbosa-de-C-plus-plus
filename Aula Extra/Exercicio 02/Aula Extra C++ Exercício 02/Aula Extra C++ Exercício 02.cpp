#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	//7) Ler dois números e dizer se são iguais ou qual o maior deles.

	do
	{
		cout << "\n\n\n";


		//Coletando 1
		cout << "Escreva o primeiro numero: ";
		int x1;
		cin >> x1;
		cout << "\n";

		//Coleltando 2
		cout << "Escreva o segundo numero: ";
		int x2;
		cin >> x2;
		cout << "\n";

		//Verificando se sao iguais
		if (x1 == x2)
		{
			cout << "RESPOSTA: O primeiro e o segundo sao iguais \n";
		}
		else if (x1 > x2)
		{
			cout << "RESPOSTA: O primeiro e maior que o segundo \n";
		}
		else
		{
			cout << "RESPOSTA: O segundo e maior que o primeiro \n";
		}


	} while (true);

}
