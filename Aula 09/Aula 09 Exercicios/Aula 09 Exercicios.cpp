#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//Exemplo de função
//pi = 3,14159
float pi() 
{
	return 3.14159;
}


int main()
{

	//A = { 1, 3, -2 }
	//B = { -2, 2, 2 }
	int A[3] = { 1,3,-2 };
	int B[3] = { -2,2,2 };

	//Qual o produto escalar?
	//A.B
	float escalarAB = 0;
	escalarAB = (A[0] * B[0]) + (A[1] * B[1]) + (A[2] * B[2]);
	cout << "Escalar: " << escalarAB;

	cout << "\n";

	//
	//
	//

	//Qual o módulo de A,B ?
	float modA, modB = 0;

	modA = sqrt(pow(A[0], 2) + pow(A[1], 2) + pow(A[2], 2));
	//modA = sqrt((A[0]*A[0]) + (A[1]*A[1]) + (A[2]*A[2]));

	modB = sqrt(pow(B[0], 2) + pow(B[1], 2) + pow(B[2], 2));

	cout << "Modulo A: " << modA << "\n";
	cout << "Modulo B: " << modB << "\n";

	//
	//
	//

	//Qual o ângulo de A faz como B ?
	float CosTeta, Teta = 0;
	CosTeta = escalarAB / (modA * modB);

	Teta = acos(CosTeta) * (180 / pi());

	//Se quiser arredondar
	Teta = floor(Teta);

	cout << "Angulo: " << Teta << "\n";
	
	//
	//
	//

	//O ângulo é agudo, obtuso ou reto?  
	if (Teta > 90)
	{
		cout << "Angulo obtuso" << "\n";
	}
	else if (Teta == 90)
	{
		cout << "Angulo reto" << "\n";
	}
	else 
	{
		cout << "Angulo agudo" << "\n";
	}

	//
	//
	//

	//A é paralelo a B ?
	float p1, p2, p3 = 0;
	p1 = A[0] / B[0];
	p2 = A[1] / B[1];
	p3 = A[2] / B[2];

	if (p1 == p2 && p1 == p3 && p2 == p3)
	{
		cout << "Sao paralelos" << "\n";
	}
	else
	{
		cout << "Nao sao paralelos" << "\n";
	}

	//
	//
	//

	//Qual o produto vetorial?
	//(rv−us)i+(st−vq)j+(qu−tr)k  
	//A(q,r,s);
	//B(t,u,v);
	int pv[3];

	pv[0] = (A[1] * B[2]) - (B[1] * A[2]);
	pv[1] = (A[2] * B[0]) - (B[2] * A[0]);
	pv[2] = (A[0] * B[1]) - (B[0] * A[1]);

	cout << "PV(" << pv[0] << "," << pv[1] << "," << pv[2] << ")\n";

	cout << "\n\n\n\n";
		
}



