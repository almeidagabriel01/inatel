#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int N; // tamanho do vetor
	int *v = NULL; // vetor declarado como ponteiro para ter o tamanho N
	int *p; // ponteiro para varrer o vetor
	int i; // contador
	double soma; // var aux para somar todas as notas e fazer a me�dia

	// entrando com tamanho do vetor
	cin >> N;

	// alocando mem�ria para deixar o vetor com o tamanho N
	v = new int[N];

	// entrando com os n�meros para calcular a m�dia
	p = v;

	for(i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	// calculando a m�dia dos n�meros
	for(p = v; p < v + N; p++)
	{
		soma += *p;
	}

	// mostrando o resultado
	cout << fixed << setprecision(2) << soma / N;

	// deletando o espa�o alocado do vetor
	delete [] v;

	return 0;
}
