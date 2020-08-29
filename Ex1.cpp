#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	double peso, altura, imc;
	
	cout << "Digite o peso: ";
	cin >> peso;
	cout << "Digite a altura: ";
	cin >> altura;
	
	imc = peso / pow(altura,2);
	
	if( imc < 20){
		cout << imc << endl;
		cout << "Abaixo do Peso" << endl;
	}
	else if (imc <= 25){
		cout << imc << endl;
		cout << "Peso ideal" << endl;
	}
	else{
		cout << imc << endl;
		cout << "Acima do Peso" << endl;
	}
	return 0;
}