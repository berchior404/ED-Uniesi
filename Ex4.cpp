#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	double sal, salReaj ;
	
	cout << "Entre com o salario do funcionario: ";
	cin >> sal;
	
	if (sal < 1000){
		salReaj = sal + (sal * 0.15);
	}
	
	else if ((sal >=1000) && (sal <= 1500)){
		salReaj = sal + (sal * 0.10);
	}
	
	else {
		salReaj = sal + (sal * 0.05);
	}
	
	cout .setf (ios::fixed | ios::showpoint);
	cout.precision(2); 
	cout << "Salário Ajustado: " << setw(8) << salReaj << endl;
}