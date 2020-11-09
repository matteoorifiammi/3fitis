#include <iostream>  
using namespace std;
int main()
{
	int a[10], n, i;
	cout << "Inserisci il numero che vuoi convertire: ";
	cin >> n;
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
	}
	cout << "Il numero binario corrispondente è= ";
	for (i = i - 1; i >= 0; i--)
	{
		cout << a[i];
	}
}
