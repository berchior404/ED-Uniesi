#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int idade;
	
	cout << "Digite a idade do nadador: ";
	cin >> idade;
	
	if ((idade >= 5) && (idade <= 7)){
		cout << idade << endl;
		cout << "INFANTIL A";
	}
	else if ((idade >= 8) && (idade <= 10)){
		cout << idade << endl;
		cout << "INFANTIL B";
	}
	else if ((idade >= 11) && (idade <= 13)){
		cout << idade << endl;
		cout << "JUVENIL A";
	}
	else if ((idade >= 14) && (idade <= 17)){
		cout << idade << endl;
		cout << "JUVENIL B";
	}
	else if (idade > 18){
		cout << idade << endl;
		cout << "SENIOR";
	}
	else {
		cout << "Idade inválida";
	}
	return 0;
}