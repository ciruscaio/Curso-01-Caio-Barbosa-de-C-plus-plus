#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	//Como manipular uma string
	string eu = "Caio";
	cout << eu.substr(3, 1) ;

	//QUESTÃO - Parabéns Victor
		//Ler um número inteiro não - negativo N, tal que 1000 ≤ N ≤ 9999, e
		//imprimir a quantidade de dígitos pares e a quantidade de dígitos
		//ímpares que compõem aquele número, desprezando - se os zeros.
		//dica: ao se dividir por 10 um inteiro constituído de um único dígito, o
		//quociente é zero e o resto é o próprio inteiro.

	//Algoritmo
	//Ex: meu usuário escreve 6789
	//	6789 / 1000 = 6, 789 -> (arrd p / baixo) -> 6 (r1)
	//	6789 - (1000 * r1) = 789 (r2)
	//	789 / 100 = 7, 89 -> (arrd p / baixo) -> 7 (r3)
	//	789 - (100 * r3) = 89 (r4)
	//	89 / 10 = 8, 9 -> (arrd p / baixo) -> 8 (r5)
	//	89 - (10 * r5) = 9
	


}
