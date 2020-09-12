#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	double tam_aluno = 0, num = 0, maior = 0, menor = 99999, numMaior = 0, numMenor = 0;
	
	for (int i=1; i < 11; i++){
		cout << "Numero do aluno: ";
		cin >> num;
		cout << "Altura do aluno em centimetros: ";
		cin >> tam_aluno;
		
		if (tam_aluno > maior){
			maior = tam_aluno;
			numMaior = num;
		}
		
		if (tam_aluno < menor){
			menor = tam_aluno;
			numMenor = num;
		}
	}
	cout << "O maior aluno e o numero " << numMaior << " com " << maior << " centimetros de altura." <<endl;
	cout << "O menor aluno e o numero " << numMenor << " com " << menor << " centimetros de altura." <<endl;
	
	return 0;
}