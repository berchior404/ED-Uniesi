#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int op = 0;
	int voto = 0;
	float a = 0, b = 0, vn = 0, vb = 0, qtd = 0;

	while (op == 0)
	{
		cout << "Seu voto (1 - Candidado A, 2 - Candidato B, 3 - Voto Nulo, 4 - Voto em Branco, 0 - Sair): ";
		cin >> voto;

		switch (voto)
		{
		case 1:
			a++;
			qtd++;
			break;

		case 2:
			b++;
			qtd++;
			break;

		case 3:
			vn++;
			qtd++;
			break;

		case 4:
			vb++;
			qtd++;
			break;

		case 0:
			op = 1;
			break;

		default:
			cout << "Operação Invalida" << endl;
		}
	}

	float ca = (a/qtd)*100;
	cout << "Percentual de votos do Candidato A: " << ca << "%" << endl;

	float cb =(b/qtd)*100;
	cout << "Percentual de votos do Candidato B: " << cb << "%" << endl;

	float cvn = (vn/qtd)*100;
	cout << "Percentual de votos nulos: " << cvn << "%" << endl;

	float cvb = (vb/qtd)*100;
	cout << "Percentual de votos em branco: " << cvb << "%" << endl;

	return 0;

}
