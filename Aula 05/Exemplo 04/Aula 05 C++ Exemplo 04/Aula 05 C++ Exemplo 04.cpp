#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
	// Calcular alternativamente (usando um MENU) as áreas das seguintes
	// figuras geométricas : quadrado, retângulo, triângulo, trapézio e
	// círculo.

	//Variáveis <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< BOA PRÁTICA (FAÇA ASSIM NA PROVA)
	int escolha = 0;
	int ladoA = 0;
	int ladoB = 0;
	int base = 0;
	int baseMenor = 0;
	int altura = 0;
	int raio = 0;
	bool continuar = false;

	do
	{
		system("cls"); //Comando para limpar a tela

		//TADA: Criando o menu
		cout << "  ////////////////////////////////////////////// \n";
		cout << " // CALCULADORA DE AREA DE FIGURA GEOMETRICA // \n";
		cout << "////////////////////////////////////////////// \n";

		cout << "\n\n\n";

		cout << "Escolha: \n";
		cout << " 1 para quadrado \n";
		cout << " 2 para retangulo \n";
		cout << " 3 para triangulo \n";
		cout << " 4 para trapezio \n";
		cout << " 5 para circulo \n\n";

		//Entrada da escolha do usuário
		cin >> escolha;

		//Imprimir entrada de dados para o usuário
		if (escolha == 1)
		{
			cout << "Lado [cm]: ";
			cin >> ladoA;

			cout << "\n";
			cout << "RESPOSTA: " << (ladoA * ladoA) << " cm2";
		}
		else if (escolha == 2)
		{
			cout << "Lado A [cm]: ";
			cin >> ladoA;

			cout << "Lado B [cm]: ";
			cin >> ladoB;

			cout << "\n";
			cout << "RESPOSTA: " << (ladoA * ladoB) << " cm2";
		}
		else if (escolha == 3)
		{
			cout << "Base [cm]: ";
			cin >> base;

			cout << "Altura [cm]: ";
			cin >> altura;

			cout << "\n";
			cout << "RESPOSTA: " << ((base * altura) / 2) << " cm2";
		}
		else if (escolha == 4)
		{
			cout << "Base [cm]: ";
			cin >> base;

			cout << "Base Menor [cm]: ";
			cin >> baseMenor;

			cout << "Altura [cm]: ";
			cin >> altura;

			cout << "\n";
			cout << "RESPOSTA: " << (((base + baseMenor) * altura) / 2) << " cm2";
		}
		else if (escolha == 5)
		{
			cout << "Raio [cm]: ";
			cin >> raio;

			cout << "\n";
			cout << "RESPOSTA: " << (3.14 * raio * raio) << " cm2";

		}
		else
		{
			cout << "ERRO";
		}

		cout << "\n\n\n";

		cout << "Deseja fazer outro calculo (0=nao, 1=sim)? ";
		cin >> continuar;


	} while (continuar);


	//false = 0; não, falha
	//true = 1; sim, verdadeiro

}
