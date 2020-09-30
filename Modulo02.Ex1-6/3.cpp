#include <iostream>
#include <string.h>

using namespace std;

#define TAM 10
int main()
{
	int A[TAM], M[TAM];
	int i = 0;
	int x = 0;
	for (i = 0; i < TAM; i++)
	{
		cout << "Valor " << i + 1 << ": ";
		cin >> A[i];
	}
	cout << "Multiplicar por: ";
	cin >> x;

	for (i = 0; i < TAM; i++)
	{
		M[i] = A[i] * x;
	}

	for (i = 0; i < TAM; i++)
	{
		cout << "Novo valor " << i + 1 << ": " << M[i] << endl;
	}
}
