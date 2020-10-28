#include <iostream>
#include <string>

using namespace std;

struct pessoa
{
	string nome;
	string endereco;
	string cpf;
	int idade;
};

int main(int argc, char** argv)
{
	int i = 0;
	pessoa p[5];

	for(i; i < 5; i++)
	{  
		cout << "Nome da pessoa " << i + 1 << ": ";
		
		getline(cin, p[i].nome);
		

		cout << "Endereco da pessoa " << i + 1 << ": ";
		getline(cin, p[i].endereco);

		cout << "CPF da pessoa " << i + 1 << ": ";
		getline(cin, p[i].cpf);

		cout << "Idade da pessoa " << i + 1 << ": ";
		cin >>  p[i].idade;
		
		cin.ignore();

		cout << "===================" << endl;
	}
	
	cout << endl;
	cout << "==DADOS SALVOS===" << endl;
	cout << endl;
	
	for(i = 0; i < 5; i++)
	{
		cout << "Nome da " << i+1 << " pessoa: " << p[i].nome << endl;
		cout << "Endereço da " << i+1 << " pessoa: " << p[i].endereco << endl;
		cout << "CPF da " << i+1 << " pessoa: " << p[i].cpf << endl;
		cout << "Idade da " << i+1 << " pessoa: " << p[i].idade << endl;
		cout << "=======================" << endl;
	}

	return 0;
}
