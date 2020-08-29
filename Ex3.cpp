#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	double salMin, salBruto, vht, imp, salRec, ht ;
	
	cout << "Entre com o valor do sal�rio m�nimo: ";
	cin >> salMin;
	cout << "Entre com o n�mero de horas trabalhadas: ";
	cin >> ht;
	
	vht = salMin/2;
	salBruto = ht * vht;
	imp = salBruto * 0.03;
	salRec = salBruto - imp;
	
	cout .setf (ios::fixed | ios::showpoint);
	cout.precision(2); 
	cout << "Sal�rio bruto: " << setw(8) << salBruto << endl << "Imposto: " << setw(8) << imp << endl << "Sal�rio a receber: R$" << setw(8) << salRec; 
	return 0;
}