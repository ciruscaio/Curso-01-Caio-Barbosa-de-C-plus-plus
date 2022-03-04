#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
	//Pontos
	//A = { 2, 1, 3 }
	//B = { 6, 4, 1 }
	//C = { -6,-2,6 }

	int A[3] = { 2, 1, 3 };
	int B[3] = { 6, 4, 1 };
	int C[3] = { -6,-2,6 };

	int AB[3] = { (B[0] - A[0]), (B[1] - A[1]), (B[2] - A[2]) };
	int AC[3] = { (C[0] - A[0]), (C[1] - A[1]), (C[2] - A[2]) };

	// | i j k |
	// | q r s | = (rv-us)i + (st-vq)j + (qu - tr)k = (rv-us, st-vq, qu - tr)
	// | t u v |

	int PV[3] = { ((AB[1] * AC[2]) - (AC[1] * AB[2]))
					, ((AB[2] * AC[0]) - (AC[2] * AB[0]))
					, ((AB[0] * AC[1]) - (AC[0] * AB[1]))
	};

	float Area_P = sqrt((PV[0] * PV[0]) + (PV[1] * PV[1]) + (PV[2] * PV[2]));

	float Area_T = Area_P / 2;

	cout << "Area Triang: " << Area_T;

}
