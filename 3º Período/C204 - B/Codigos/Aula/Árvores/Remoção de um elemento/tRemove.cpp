#include <iostream>
#include <list>
using namespace std;

struct treenode
{
  int info;
  treenode *esq;
  treenode *dir;
};
typedef treenode *treenodeptr;

void tInsere(treenodeptr &p, int x)
{
  if (p == NULL) // insere na raiz
  {
    p = new treenode;
    p->info = x;
    p->esq = NULL;
    p->dir = NULL;
  }
  else if (x < p->info) // insere na subarvore esquerda
    tInsere(p->esq, x);
  else // insere na subarvore direita
    tInsere(p->dir, x);
}

void preOrdem(treenodeptr arvore)
{
  if (arvore != NULL)
  {
    cout << arvore->info << endl;
    preOrdem(arvore->esq);
    preOrdem(arvore->dir);
  }
}

void emOrdem(treenodeptr arvore)
{
  if (arvore != NULL)
  {
    emOrdem(arvore->esq);
    cout << arvore->info << endl;
    emOrdem(arvore->dir);
  }
}

void posOrdem(treenodeptr arvore)
{
  if (arvore != NULL)
  {
    posOrdem(arvore->esq);
    posOrdem(arvore->dir);
    cout << arvore->info << endl;
  }
}

void emNivel(treenodeptr t)
{
  treenodeptr n;
  list<treenodeptr> q;

  if (t != NULL)
  {
    q.push_back(t);
    while (!q.empty())
    {
      n = *q.begin();
      q.pop_front();
      if (n->esq != NULL)
        q.push_back(n->esq);
      if (n->dir != NULL)
        q.push_back(n->dir);
      cout << n->info << endl;
    }
    cout << endl;
  }
}

void tDestruir(treenodeptr &arvore)
{
  if (arvore != NULL)
  {
    tDestruir(arvore->esq);
    tDestruir(arvore->dir);
    delete arvore;
  }
  arvore = NULL;
}

treenodeptr tMenor(treenodeptr &raiz)
{
  treenodeptr t;
  t = raiz;
  if (t->esq == NULL) // encontrou o menor valor
  {
    raiz = raiz->dir;
    return t;
  }
  else // continua a busca na sub´arvore esquerda
    return tMenor(raiz->esq);
}

int tRemove(treenodeptr &raiz, int x)
{
  treenodeptr p;
  if (raiz == NULL) // ´arvore vazia
    return 1;
  if (x == raiz->info)
  {
    p = raiz;
    if (raiz->esq == NULL) // a raiz n~ao tem filho esquerdo
      raiz = raiz->dir;
    else if (raiz->dir == NULL) // a raiz n~ao tem filho direito
      raiz = raiz->esq;
    else // a raiz tem ambos os filhos
    {
      p = tMenor(raiz->dir);
      raiz->info = p->info;
    }
    delete p;
    return 0;
  }
  else if (x < raiz->info)
    return tRemove(raiz->esq, x);
  else
    return tRemove(raiz->dir, x);
}

int main()
{

  return 0;
}