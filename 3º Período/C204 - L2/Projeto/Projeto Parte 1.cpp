#include <iostream>
#include <list>
#include <climits>
using namespace std;

// struct para montar o grafo
struct no
{
	int v; // vertice de destino da aresta
	int peso; // peso da aresta
};

// fun��o que cria a aresta do grafo
void cria_aresta(list<no>adj[], int u, int v, int p)
{
	no aux; // var aux para inserir as arestas em adj

	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);
	aux.v = u;
	adj[v].push_back(aux);
}

// fun��o que calcula o menor custo dos caminhos do grafo
void dijkstra(list<no>adj[], int nVertices, int start, int end)
{
	bool intree[10];
	int distance[10];
	int parent[10];
	list<int> caminho; // lista para armazenar o caminho feito com menor custo
	int u, v;
	int destino;
	int weight;
	int dist;
	list<no>::iterator p; // iterator para varrer a lista adj
	int custo = 0; // var aux para armazenar o custo do caminho
	list<int>::iterator c;

	for(u = 0; u < nVertices; u++)
	{
		intree[u] = false;
		distance[u] = INT_MAX;
		parent[u] = -1;
	}
	distance[start] = 0;
	v = start;
	while(intree[v] == false)
	{
		intree[v] = true;
		for(p = adj[v].begin(); p != adj[v].end(); p++)
		{
			destino = p->v;
			weight = p->peso;
			if(distance[destino] > distance[v] + weight)
			{
				distance[destino] = distance[v] + weight;
				parent[destino] = v;
			}
		}
		v = 0;
		dist = INT_MAX;
		for(u = 0; u < nVertices; u++)
		{
			if(intree[u] == false && dist > distance[u])
			{
				dist = distance[u];
				v = u;
			}
		}
	}

	// salvando o end na var u para poder fazer o controle de parents
	u = end;
	// colocando o elemento final no primeiro lugar da fila
	caminho.push_front(end);
	// salvando o caminho na fila
	while(parent[u] != -1) // se parents for -1, quer dizer que n�o tem mais caminhos
	{
		caminho.push_front(parent[u]);
		u = parent[u];
	}
	// salvando o custo
	custo = distance[end]; // o custo, por ser acumulativo, � igual a distancia do �ltimo v�rtice

	// mostrando o vetor na ordem certa e o custo do caminho total
	cout << "Menor caminho: ";
	for(c = caminho.begin(); c != caminho.end(); c++) // foram salvos 4 caminhos, mas no vetor as posi��es v�o de 0 - 3
	{
		cout << *c << " ";
	}

	cout << endl << "Custo: " << custo << endl;
}

int main()
{
	list<no> adj[100]; // lista de adjacencia
	int u, v; // vertices de origem e destino de cada aresta
	int peso; // peso da aresta
	int nVertices; // numero de vertices do grafo
	list<no>::iterator p; // iterator para varrer a lista de adjac�ncia
	int start; // v�rtice inicial da �rvore
	int end; // v�rtice final da �rvore

	// entrando com o numero de vertices do grafo e se � orientado ou n�o
	cin >> nVertices >> start >> end;

	// inserindo arestas
	cin >> u >> v >> peso;
	while(u != -1 && v != -1 && peso != -1)
	{
		cria_aresta(adj, u, v, peso);
		cin >> u >> v >> peso;
	}

	// mostrando o grafo
	dijkstra(adj, nVertices, start, end);

	return 0;
}
