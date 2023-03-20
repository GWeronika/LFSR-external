#include <iostream>
#include <math.h>			//for exponentation

using namespace std;

int main()
{
	int n, r;			//n - register length (integer); r - initial state {0,1}

	cout << "Program generuje liczby losowe" << endl;
	cout << "Podaj dlugosc rejestru ze zbioru liczb calkowitych {2,20} " << endl;
	cin >> n;

	cout << "Podaj stan poczatkowy o dlugosci " << n << " zlozony z cyfr ze zbioru {0,1} " << endl;
	cin >> r;

	int rozmiar = pow(2, n) - 1;			//maximum length of the binary sequence
	int* tab = new int[rozmiar];			//contains successive elements of the register

	do
	{
		for (int i = n - 1; i >= 0; i--)			//extracts all digits of the initial state
		{
			tab[i] = r % 10;
			r /= 10;
		}
	} while (r > 1);

	for (int i = 0; i < rozmiar - n; i++)
	{
		if (((tab[i] == 0) && (tab[i + 1] == 0)) || ((tab[i] == 1) && (tab[i + 1] == 1)))			//XOR gate if false (it is 0)
			tab[n + i] = 0;
		else				//else if true
			tab[n + i] = 1;
	}
	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab[i];			//output
	}
	return 0;

}