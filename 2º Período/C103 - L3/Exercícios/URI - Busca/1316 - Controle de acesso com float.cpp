#include <iostream>
using namespace std;

int binaria(float vetor[],int tamanho, float x)
{
	bool achou; // aux para saber se achou ou n�o
	int baixo, meio, alto; // aux para achar dentro do vetor
	baixo = 0; // definindo o baixo como o in�cio do vetor
	alto = tamanho - 1; // definindo o alto como a �ltima posi��o do vetor
	achou = false; // inicializando o "achou" como falso
	
	// fazendo a busca
	while ((baixo <= alto) && (achou == false))
	{
		meio = (baixo + alto) / 2;
		
		if(x < vetor[meio])
			alto = meio - 1;
		
		else if(x > vetor[meio])
			baixo = meio + 1;
		
		else
			achou = true;
	}
	
	// retornando os valores se achar ou n�o achar o valor no vetor
	if(achou)
		return meio;
	else
		return -1;
}

int main()
{
	float vetor[20]; // vetor a ser colocado os valores de entrada
	float x; // n�mero a ser buscado no vetor
	int i = 0; // contador
	int res = 0; // resolu��o da busca
	
	// lendo os valores a serem inseridos no vetor
	cin >> vetor[i];
	
	while(vetor[i] != -1)
	{
		i++;
		cin >> vetor[i];
	}
	
	// lendo o n�mero a ser buscado no vetor
	cin >> x;
	
	// chamando a fun��o para fazer a busca
	res = binaria(vetor, i, x);
	
	// apresentando a solu��o
	if(res != -1)
		cout << "Possui acesso" << endl;
	else
		cout << "Nao possui acesso" << endl;
	
	return 0;
}