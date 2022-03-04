#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

#include <fstream> // mágica

using namespace std;


struct Pessoa {

	int Codigo;
	string Nome;

};


void GravarNoBanco(string pDado) {

	ofstream out;
	out.open("C:\\Users\\cirus\\Desktop\\bd2.txt", ios::app);
	if (out.is_open()) {

		out << pDado << endl;
		out.close();
	}
	else {
		cout << "ERRO ao abrir";
	}

}

Pessoa LerDoBanco() {

}


int main()
{
	//Lá no seu programa 
	const int lTamanhoDoBanco = 1000;
	Pessoa lPessoas[lTamanhoDoBanco];
	lPessoas[0].Codigo = 0;
	lPessoas[0].Nome = "Caio";
	lPessoas[1].Codigo = 1;
	lPessoas[1].Nome = "Fulano";
	lPessoas[2].Codigo = 2;
	lPessoas[2].Nome = "Sicrano";

	//Percorro o banco em mória para transferir os dados para um arquivo físico
	for (int i = 0; i < lTamanhoDoBanco; i++)
	{
		//Validadção para nao tentar gravar uma  posição inexistentet no banco
		if (lPessoas[i].Codigo >= 0)
		{
			GravarNoBanco("[" + to_string(lPessoas[i].Codigo) + "," + lPessoas[i].Nome + "]");

		}
	}
}




//string nome = "Caio Bonitao de mais";
//ofstream out("C:\\Users\\cirus\\Desktop\\bd.txt");
//out << nome;
//out.close();

//ofstream out;
//out.open("C:\\Users\\cirus\\Desktop\\bd2.txt", ios::app);
//if (out.is_open()) {

//	//long pos = out.tellp();
//	out << "Caio" << endl;
//	out << "Bonitao" << endl;
//	out.close();
//}
//else {
//	cout << "ERRO ao abrir";
//}

//ifstream in("C:\\Users\\cirus\\Desktop\\bd2.txt");
//string nome_recuperado;

//if (in.is_open()) {

//	while (!in.eof())
//	{
//		getline(in, nome_recuperado);

//		cout << nome_recuperado << "\n";
//	}

//	
//}
//else {
//	cout << "ERRO ao abrir";
//}
