#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int op, a = 0;
	float otimo = 0, bom = 0, regular = 0, ruim = 0, tp = 0, id = 0, sid = 0;;

	while (a == 0)
	{
		cout << "Idade: ";
		cin >> id;

		cout << "Opiniao (1- Otimo, 2- Bom, 3- Regular, 4- Ruim, 0- SAIR): ";
		cin >> op;

		switch (op)
		{
		case 1:
			otimo++;
			break;

		case 2:
			bom++;
			break;

		case 3:
			regular++;
			break;

		case 4:
			ruim++;
			break;

		default:
			cout << "Operação Invalida" << endl;
		}

		sid = sid + id;
		tp++;

		cout << "Deseja continuar? 0- SIM, 1- NAO" << endl;
		cin >> a;

	}

	cout << "Total de participantes da pesquisa: " << tp << endl;

	float mid = sid / tp;
	cout << "Media de idade: " << mid << endl;

	float calc1 = otimo / tp * 100;
	cout << "Porcentagem de Otimo: " << calc1 << "%" << endl;
	float calc2 = bom / tp * 100;
	cout << "Porcentagem de Bom: " << calc2 << "%" << endl;
	float calc3 = regular / tp * 100;
	cout << "Porcentagem de Regular: " << calc3 << "%" << endl;
	float calc4 = ruim / tp * 100;
	cout << "Porcentagem de Ruim: " << calc4 << "%" << endl;

	return 0;
}
