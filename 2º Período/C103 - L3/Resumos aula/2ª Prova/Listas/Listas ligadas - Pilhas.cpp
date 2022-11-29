#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> pilha; // ponteiros
	int x; // var aux para leitura dos dados
	int i; // contador

	// Lendo dados e inserindo na pilha
	for(i = 0; i < 3; i++) // 2 1 7
	{
		cin >> x;
		pilha.push_front(x); // insere x no in�cio da pilha
	}

	// Mostrando e removendo elementos inseridos
	while(!pilha.empty())
	{
		cout << *pilha.begin() << endl; // pilha.begin() aponta para o primeiro n� da lista
		pilha.pop_front(); // remove o primeiro n� da lista
	}
	
	/*
	cout << *pilha.begin() << endl; // pilha.begin() aponta para o segundo n� da lista
	pilha.pop_front(); // removendo o segundo n� da lista

	cout << *pilha.begin() << endl; // pilha.begin() aponta para o terceiro n� da lista
	*/

	return 0;
}
