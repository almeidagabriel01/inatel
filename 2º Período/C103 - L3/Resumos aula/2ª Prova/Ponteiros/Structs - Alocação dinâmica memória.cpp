#include <iostream>
using namespace std;

struct info
{
	int codigo; // c�digo do produto
	float preco; // pre�o unit�rio
};

int main()
{
	info *produto; // ponteiro para a informa��o do produto
	
	// Alocando mem�ria para a struct
	produto = new info;
	
	// Armazenando os dados
	produto->codigo = 2;
	produto->preco = 1.50;
	
	/* 
	Usa-se a flecha pois a struct est� declarada como ponteiro.
	*/
	
	// Mostrando os dados
	cout << "Codigo: " << produto -> codigo << endl;
	cout << "Preco: " << produto -> preco << endl;
	
	// Liberando a mem�ria usada pela struct
	delete produto;
	
	/*
	n�o coloca o [] depois do delete e antes da vari�vel pois � uma posi��o apenas
	*/
	
	return 0;
}

/*
    1. N�o coloca o [] depois de info pois nesse caso n�o � um vetor de struct
    
	2. Usa-se a flecha ao inv�s de ponto, pois para mostrar a struct � necess�rio o ponteiro produto que tem apenas 1 posi��o, (n�o � um vetor do ponteiro), e para mostrar com uma posi��o do ponteiro utiliza-se a flecha.

    3. n�o coloca o [] depois do delete e antes da vari�vel pois n�o � um vetor

*/