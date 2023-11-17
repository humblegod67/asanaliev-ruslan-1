
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n1 = 0, n2 = 1;
	int n;
	int i = 0;
	do
	{
		cout << n1 << "";
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		i++;

	} while (i < 10);
	cout << endl;
	return 0;
}

