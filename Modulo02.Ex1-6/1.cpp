#include <iostream>
#include <stdio.h>

using namespace std;

#define TAM 11

void encontra(string vet[TAM], string nome)
{
	for (int i = 0; i < TAM; i++)
	{
		if (vet[i] == nome)
		{
			cout << "ACHOU";
		}
		else
		{
			cout << "NAO ACHOU";
		}
	}
}

int main(int argc, char** argv)
{
	string localiza;
	string nomes[TAM];

	for (int i = 0; i < TAM; i++)
	{
		cout << "Digite um nome: ";
		cin >> nomes[i];
	}

	cout << "";
	cout << "Verifique se um nome foi digitado. Digite o nome que procura: ";
	cin >> localiza ;

	encontra(nomes, localiza);

	return 0;
}
