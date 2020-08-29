#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	double valor;
	int op;

	cout << "Entre com o valor do produto: R$";
	cin >> valor;
	cout << "OPCOES DE PAGAMENTO: 1- A VISTA, 2- A VISTA COM CARTÃO DE CREDITO, 3- 2X NO CARTAO S/ JUROS, 4- 3X C/ JUROS (10%)" << endl;
	cin >> op;
	
	switch (op)
	{
	case 1:
		valor = valor - (valor * 0.1);
		cout .setf (ios::fixed | ios::showpoint);
		cout.precision(2);
		cout << "Valor: R$" << setw(8) << valor << endl;
		break;

	case 2:
		valor = valor - (valor * 0.05);
		cout .setf (ios::fixed | ios::showpoint);
		cout.precision(2);
		cout << "Valor: R$" << setw(8) << valor << endl;
		break;

	case 3:
		cout .setf (ios::fixed | ios::showpoint);
		cout.precision(2);
		cout << "Valor Parcelado: R$" << setw(8) << valor / 2 << endl;
		cout << "Valor Total: R$" << setw(8) << valor << endl;
		break;

	case 4:
		valor = valor + (valor * 0.1);
		cout .setf (ios::fixed | ios::showpoint);
		cout.precision(2);
		cout << "Valor Parcelado: R$" << setw(8) << valor / 2 << endl;
		cout << "Valor Total: R$" << setw(8) << valor << endl;
		break;

	default:
		cout << "Operação Invalida" << endl;
	}
	
	return 0;
}

