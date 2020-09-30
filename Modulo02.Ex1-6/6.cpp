#include <iostream>
#include <string.h>

using namespace std;

#define TAM 365
int main()
{
	float temp[TAM];
	float min = 0, max = 0;
	int i = 0, qtdFrio = 0;
	float media = 0, soma = 0;

	for(i = 0; i < TAM; i++)
	{
		cout << "Temperatura dia " << i + 1 << ": ";
		cin >> temp[i];
	}

	min = temp[0];
	max = temp[0];

	for(i = 0; i < TAM; i++)
	{
		soma += temp[i];

		if (temp[i] < min)
		{
			min = temp[i];
		}
		if (temp[i] > max)
		{
			max = temp[i];
		}
	}
	media = soma / TAM;

	for(i = 0; i < TAM; i++)
	{
		if (temp[i] < media)
		{
			qtdFrio++;
		}
	}

	cout << endl;

	cout << "Informaçõs: " << endl;
	cout << "Menor temperatura: " << min << endl;
	cout << "Maior temperatura: " << max << endl;
	cout << "Temperatura media: " << media << endl;
	cout << "Numero de dias com temperatura abaixo da media: " << qtdFrio << endl;
}
