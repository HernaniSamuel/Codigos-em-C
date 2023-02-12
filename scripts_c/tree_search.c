#include <stdio.h>
#include <stdlib.h>

struct no{
	int valor;
	struct no *esq;
	struct no *dir;
};

typedef struct no No;

void imprimir(No *n){
	if (n == NULL){
		return;
	}
	else{
		printf("%d | ", n->valor);
		imprimir(n->esq);
		imprimir(n->dir);
	}
}

No* create(int valor){
	No *n = malloc(sizeof(No));
	n->valor = valor;
	n->esq = NULL;
	n->dir = NULL;
	
	return n;
}

int main(void){
	No *no2 = create(2);
	No *no1 = create(1);
	No *no0 = create(0);
	No *no8 = create(8);
	No *no8a = create(8);
	No *no3 = create(3);
	No *no2a = create(2);
	No *no7 = create(7);
	No *no5 = create(5);

	no2->esq = no1;
	no2->dir = no8;
	no1->esq = no0;
	no1->dir = no3;
	no3->esq = no2a;
	no8->esq = no7;
	no8->dir = no8a;
	no7->esq = no5;
	
	imprimir(no2);
	
	return(0);
}
