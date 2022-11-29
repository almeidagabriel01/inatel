#include <iostream>
using namespace std;

// fun��o para determinar quantas vezes um d�gito k ocorre em um n�mero natural N
int conta(int N, int k)
{
	if(N == 0)
		return 0;
	else
		return conta(N / 10, k) + (N % 10 == k);
}

int main()
{
	int n; // n�mero N
	int k; // d�gito k

	// entrada de dados
	cin >> n >> k;

	// processamento e sa�da de dados
	while(n != -1 && k != -1)
	{
		cout << conta(n, k) << endl;

		cin >> n >> k;
	}

	return 0;
}
