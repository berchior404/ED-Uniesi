#include <iostream>
#include <string.h>

using namespace std;


int main()
{
	int N = 0;
	cout << "Tamanho dos vetores: ";
	cin >> N;
	int i = 0;

	int A[N], B[N], Soma[N];

	cout << "Primeiro Vetor" << endl;
	for(i = 0; i < N; i++)
	{
		cout << "Valor " << i + 1 << ": ";
		cin >> A[i];
	}

	cout << endl;

	cout << "Segundo Vetor" << endl;
	for(i = 0; i < N; i++)
	{
		cout << "Valor " << i + 1 << ": ";
		cin >> B[i];
	}


	for(i = 0; i < N; i++)
	{
		Soma[i] = A[i] + B[i];
	}

	cout << endl;
	cout << "Total dos Vetores" << endl;
	for(i = 0; i < N; i++)
	{
		cout << A[i] << " + " << B[i] << " = " << Soma[i] << endl;
	}


}
