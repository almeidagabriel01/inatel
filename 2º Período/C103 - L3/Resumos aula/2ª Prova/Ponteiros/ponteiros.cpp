#include <iostream>
using namespace std;

int main()
{
	int a; // vari�vel "normal"
	int *b; // ponteirodo do tipo inteiro
	
	a=2;
	b = &a; // &: endere�o de
	
	cout << "&a = " << &a << endl;
	cout << "b = " << b << endl;
	cout << "*b = " << *b << endl; // *: conte�do apontado por, de refer�ncia
	
	*b = 3;
	cout << "a = " << a << endl;
	
	
	return 0;
}