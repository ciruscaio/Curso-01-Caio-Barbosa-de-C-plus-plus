#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	

		//00000
		//99999
		//abcde

		//ninguem pode ser repetido

		int x = 0;

		for (int a = 0; a < 10; a++)
		{
			for (int b = 0; b < 10; b++)
			{
				for (int c = 0; c < 10; c++)
				{
					for (int d = 0; d < 10; d++)
					{
						for (int e = 0; e < 10; e++)
						{
							// a  b  c  d  e
							if (a != b && a != c && a != d && a != e && b != c && b != d && b != e && c != d && c != e && d != e)
							{
								cout << a << b << c << d << e << "\n";

								x++;
							}
						}
					}
				}
			}
		}


		cout << "Eeste e o valor total: " << x;


	

}
