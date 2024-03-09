#include<stdio.h>

typedef struct
{
	int vetor[50], contador;
} PILHA;

int main(void)
{
	PILHA pilha;
	int valor;

	pilha.contador = 0;

	//empilha 5
	valor = 5;
	pilha.vetor[pilha.contador] = valor;
	pilha.contador += 1;

	//empilha 8
	valor = 8;
	pilha.vetor[pilha.contador] = valor;
	pilha.contador += 1;

	//desempilha
	pilha.contador -= 1;
	printf("--%d\n", pilha.vetor[pilha.contador]);

	//empilha 9
	valor = 9;
	pilha.vetor[pilha.contador] = valor;
	pilha.contador += 1;
	
	//desempilha
	pilha.contador -= 1;
	printf("--%d\n", pilha.vetor[pilha.contador]);
	
	//desempilha
	pilha.contador -= 1;
	printf("--%d\n", pilha.vetor[pilha.contador]);

	return 0;
}