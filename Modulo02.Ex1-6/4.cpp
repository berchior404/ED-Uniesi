#include <iostream>
#include <string.h>

using namespace std;

#define TAM 20
int main()
{
	int Valor[TAM];
	int i = 0;
	for (i = 0; i < TAM; i++)
	{
		cout << "Valor " << i + 1 << ": ";
		cin >> Valor[i];
	}
		cout << endl;
	for (i = TAM - 1; i >= 0; i--)
	{
		cout << "Valor " << i + 1 << ": " << Valor[i] << endl; 
	}
}