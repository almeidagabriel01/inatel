#include <iostream>
#include <iomanip>
using namespace std;

// struct de cada aluno
struct dados
{
	int notas[100]; // notas dos alunos
	float media; // m�dia das notas dos alunos
};

int main()
{
	dados *alunos; // struct das notas dos alunos e a m�dia deles
	int i, j; // contador
	int n; // n�meros de alunos

	// entrando com o n�mero de alunos
	cin >> n;

	// alocando mem�ria para a struct
	alunos = new dados[4];

	// lendo as notas de cada aluno
	for(i = 0; i < n; i++)
		for(j = 0; j < 4; j++)
			cin >> alunos[i].notas[j];

	// fazendo a m�dia das notas e armazenando na struct
	alunos[0].media = 0; // excluindo o lixo da primeira posi��o para armazenar a m�dia

	for(i = 0; i < n; i++)
		for(j = 0; j < 4; j++)
			alunos[0].media = alunos[0].media + alunos[i].notas[j];

	alunos[0].media = alunos[0].media / (n*4);

	// mostrando a m�dia calculada
	cout << fixed << setprecision(2) << alunos[0].media << endl;

	// liberando a mem�ria usada pela struct
	delete [] alunos;

	return 0;
}
