#include <iostream>
#include <iomanip>
using namespace std;

float mediaImpares(int *vetor, int N)
{
	int *p; // ponteiro para varrer a lista
	double soma; // var para somar os elementos
	int impar = 0; // var para contar quantos dos elementos s�o impares
	double res; // resultado

	for(p = vetor; p < vetor + N; p++)
	{
		if(*p % 2 != 0)
		{
			soma += *p;
			impar++;
		}
	}
	
	res = soma / impar;
	
	return res;
}

int main()
{
	int N; // tamanho do vetor
	int *vet; // vetor
	double media; // var para armazenar a m�dia dos elementos impares
	int i; // contador

	// entrando com o tamanho do vetor
	cin >> N;

	// alocando mem�ria para o vetor
	vet = new int[N];
	
	// inserindo elementos no vetor
	for(i = 0; i < N; i++)
	{
		cin >> vet[i];
	}

	// calculando a m�dia dos elementos �mpares
	media = mediaImpares(vet, N);

	// mostrando a solu��o
	cout << fixed << setprecision(2) << "Media dos elementos impares: " << media << endl;
	
	// deletando o espa�o alocado pelo vetor
	delete [] vet;

	return 0;
}
