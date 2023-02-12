#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tamanho 5

struct tfila{
	int dados[tamanho];
	int inicio;
	int fim;
};

struct tfila fila;
int op;

void fila_mostra();
void mostra_menu();
void fila_entra();
void fila_sai();

int main(){
	setlocale(LC_ALL, "Portuguese");
	fila.inicio = 0;
	fila.fim = 0;
	op = 10;
	while(op != 0){
		system("cls");
		fila_mostra();
		mostra_menu();
		
		scanf("%d", &op);
		printf("\n\n");
		
		switch(op){
			case 1:
				fila_entra();
			break;
			case 2:
				fila_sai();
			break;
			case 0:
				printf("Até mais!");
			break;
		}	
	}
	return 0;
}

void fila_mostra(){
	int i;
	printf("[ ");
	
	for(i=0;i<tamanho;i++){
		printf("%d ", fila.dados[i]);
	}
	printf(" ]\n\n");
}

void mostra_menu(){
	printf("\nO que você deseja fazer?\n");
	printf("1-Adicionar dados à fila\n");
	printf("2-Retirar dados da fila\n");
	printf("0-Encerrar programa\n");
	printf("Sua escolha: ");
}

void fila_entra(){
	if (fila.fim == tamanho){
		printf("A fila está cheia!\n");
		system("pause");
	}
	else{
		printf("Elemento a ser adicionado: ");
		scanf("%d", &fila.dados[fila.fim]);
		fila.fim++;
	}
}

void fila_sai(){
	if (fila.inicio == fila.fim){
		printf("A fila está vazia!\n");
		system("pause");
	}
	else{
		int i;
		for (i=0;i<tamanho;i++){
			fila.dados[i] = fila.dados[i+1];
			}
		fila.dados[fila.fim] = 0;
		fila.fim--;
		}
	}
























