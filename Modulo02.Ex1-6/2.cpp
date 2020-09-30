#include <iostream>

using namespace std;

#define NOTAS 20

float mediaValor(float vet[], int tam)
{
	float soma = 0;
	for (int i = 0; i < NOTAS; i++)
	{
		soma += vet[i];
	}
	return soma / tam;
}

int main()
{
	float vet[NOTAS], acima = 0;
	float media;

	for (int i = 0; i < NOTAS; i++)
	{
		cout << "Digite a nota " << i + 1 << ": ";
		cin >> vet[i];
	}

	media = mediaValor(vet, NOTAS);
	cout << "Media: " << media << endl;

	for (int i = 0; i < NOTAS; i++)
	{
		if (vet[i] > media)
		{
			acima++;
		}
	}
	cout << "Valores Acima da Media: " << acima << endl;

	return 0;
}


