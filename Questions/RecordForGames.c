#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARRAY 10
#define MAX_NOME 1000

typedef struct
{
    char *nome;
    int pontuacao;
} RECORDE;

typedef struct
{
    RECORDE vetor[MAX_ARRAY];
    int n;

} ARRAY;

RECORDE elemento(ARRAY *, int);
int tamanho(ARRAY *);
void insere(ARRAY *, RECORDE);

void remove_posicao(ARRAY *, int);
void imprime(ARRAY *);
void sort(ARRAY *);
void bubble_sort(RECORDE *, int);

int main(int argc, char *argv [])
{
	RECORDE rec1;
    rec1.nome = "Filipe";
    rec1.pontuacao = 100;
    
    RECORDE rec2;
    rec2.nome = "Carlos";
    rec2.pontuacao = 80;
    
    RECORDE rec3;
    rec3.nome = "Leandro";
    rec3.pontuacao = 60;
    
    RECORDE rec4;
    rec4.nome = "Fabricio";
    rec4.pontuacao = 55;
    
    RECORDE rec5;
    rec5.nome = "Fabio";
    rec5.pontuacao = 18;
    
    RECORDE rec6;
    rec6.nome = "Paulo";
    rec6.pontuacao = 47;
    
    RECORDE rec7;
    rec7.nome = "Arthur";
    rec7.pontuacao = 77;
    
    RECORDE rec8;
    rec8.nome = "Dani";
    rec8.pontuacao = 23;
    
    RECORDE rec9;
    rec9.nome = "Pedro";
    rec9.pontuacao = 44;
    
    RECORDE rec10;
    rec10.nome = "Rafael";
    rec10.pontuacao = 12;
    
    RECORDE rec11;
    rec11.nome = "Nobou";
    rec11.pontuacao = 99;
    
    ARRAY array;
    array.n = 0;
    insere(&array, rec1);
    insere(&array, rec2);
    insere(&array, rec3);
    insere(&array, rec4);
    insere(&array, rec5);
    insere(&array, rec6);
    insere(&array, rec7);
    insere(&array, rec8);
    insere(&array, rec9);
    insere(&array, rec10);
    
    imprime(&array);
    
    insere(&array, rec11);
    imprime(&array);

	return 0;
}

RECORDE elemento(ARRAY *array, int posicao)
{
	return array->vetor[posicao];
}

int tamanho(ARRAY *array)
{
	return array->n;
}

void insere(ARRAY *array, RECORDE recorde)
{
    if(tamanho(array) < MAX_ARRAY)
    {
        array->vetor[tamanho(array)] = recorde;
        array->n += 1;
    }
    else
    {
        RECORDE menor_recorde;
        menor_recorde = elemento(array, MAX_ARRAY - 1);
        
        if(menor_recorde.pontuacao >= recorde.pontuacao)
        {
            return;
        }
        else
        {
            remove_posicao(array, MAX_ARRAY - 1);
            insere(array, recorde);
            return;
        }
    }
    
    sort(array);
}

void remove_posicao(ARRAY *array, int posicao)
{
	if(tamanho(array) == 0)
	{
		return;
	}
	else if(tamanho(array) == 1)
	{
		array->n -= 1;
		return;
	}
	else
	{
		array->n -= 1;
		array->vetor[posicao] = array->vetor[tamanho(array)];
	}
    
    sort(array);
}

void imprime(ARRAY *array)
{
	int i;
    RECORDE recorde;

    printf("------------------------------\n");
	printf("Recordes:\n");

	for(i = 0; i < tamanho(array); i++)
	{
        recorde = elemento(array, i);
        printf("%d - %d :: %s \n", i+1, recorde.pontuacao, recorde.nome);
	}

	printf("------------------------------\n");
}

void sort(ARRAY *array)
{
	bubble_sort(array->vetor, array->n);
}

void bubble_sort(RECORDE list[], int n)
{
	int i, j;
    RECORDE swap;

	for(i = 0 ; i < ( n - 1 ); i++)
	{
		for(j = 0 ; j < n - i - 1; j++)
		{
			if(list[j].pontuacao < list[j+1].pontuacao)
			{ 
				swap = list[j];
				list[j] = list[j+1];
				list[j+1] = swap;
			}
		}
	}
}