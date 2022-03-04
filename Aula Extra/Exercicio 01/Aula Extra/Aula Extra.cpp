#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	//Ler um valor inteiro correspondente a um período de tempo
	//em segundos e transformá - lo no formato horas, minutos e segundos.

	
	//Informar ao usuário que ele precisa escrever na tela
	cout << "Escreva um valor inteiro que correspondne a segundos: \n";

	//Ler da tela
	int segundos;
	cin >> segundos;

	//Transformar
	int minutos = ceil(segundos / 60);
	int horas = ceil(minutos / 60);
	int dias = ceil(horas / 24);

	//Apresentar na tela para o usuárioi
	cout << "Segundos: " << segundos << "\n";
	cout << "Minutos:  " << minutos << "\n";
	cout << "Horas:    " << horas << "\n";
	cout << "Dias:     " << dias << "\n";

}
