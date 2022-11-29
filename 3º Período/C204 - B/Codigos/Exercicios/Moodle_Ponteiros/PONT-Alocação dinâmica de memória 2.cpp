#include <iostream>
#include <iomanip>
using namespace std;

// struct de cada aluno
struct dados
{
	int notas1; // nota 1
	int notas2; // nota 2
	int notas3; // nota 3
	int notas4; // nota 4
	float media; // m�dia das notas dos alunos
};

int main()
{
	dados *alunos; // struct das notas dos alunos e a m�dia deles
	int N; // numero de alunos
	int i; // contadores

	// entrando com o n�mero de alunos
	cin >> N;

	// alocando mem�ria para a struct
	alunos = new dados[N];

	// lendo as notas de cada aluno
	for(i = 0; i < N; i++)
		cin >> alunos[i].notas1 >> alunos[i].notas2 >> alunos[i].notas3 >> alunos[i].notas4;

	// fazendo a m�dia das notas e armazenando na struct
	alunos[0].media = 0; //limpando lixo
	
	for(i = 0; i < N; i++)
		alunos[0].media = alunos[0].media + alunos[i].notas1 + alunos[i].notas2 + alunos[i].notas3 + alunos[i].notas4;

	// mostrando a m�dia calculada
	cout << fixed << setprecision(2) << alunos[0].media / (N * 4) << endl;

	// liberando a mem�ria usada pela struct
	delete [] alunos;

	return 0;
}
