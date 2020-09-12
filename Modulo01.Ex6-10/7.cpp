#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int n = 0;

	for (int i = 0; i < 501; i++)
	{
		if (n % 5 == 0)
		{
			cout << n << endl;
		}
		n++;
	}
	return 0;

}
