#include <iostream>
#include <list>
using namespace std;

int main()
{
	int N; // n�mero de opera��es
	int i; // contador
	list<int>estoque; // ponteiro para a lista estoque
	int est; // var aux para leitura de dados do estoque
	list<int>::iterator p; // iterador para varrer as listas
	list<int>venda; // vetor que armazena o c�digo do produto para venda
	int num; // var para ver se � de estoque ou de venda

	// lendo o n�mero de opera��es
	cin >> N;

	// processamento de dados
	for(i = 0; i < N; i++)
	{
		cin >> num;
		if(num == 1)
		{
			cin >> est;
			estoque.push_back(est);
		}
		else if(num == 2)
		{
			venda.push_front(*estoque.begin());
			estoque.pop_front();
		}
	}

	// sa�da de dados
	cout << "Estoque: ";
	for(p = estoque.begin(); p != estoque.end() ; p++)
			cout << *p << " ";
			

	cout << "Venda: ";
	for(p = venda.begin(); p != venda.end(); p++)
			cout << *p << " ";

	return 0;
}
