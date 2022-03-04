#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include "FuncoesCalculoAreas.h"

using namespace std;


struct Pessoa {
	int Codigo;
	string Nome;
};


int main()
{

	//Banco de dados
	Pessoa lPessoas[1000];

	lPessoas[0].Codigo = 0;
	lPessoas[0].Nome = "Caio";

	lPessoas[1].Codigo = 1;
	lPessoas[1].Nome = "Fulano";

	lPessoas[2].Codigo = 2;
	lPessoas[2].Nome = "Sicrano";






	//Biliotecas

	float lResultado = Area_T(1, 2, 3, 4, 5, 6, 7, 8, 9);

	cout << "Area do triangulo: " << lResultado;


}



