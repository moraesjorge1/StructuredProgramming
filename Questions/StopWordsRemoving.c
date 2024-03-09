#include<stdlib.h>

typedef struct
{
    char *lista;
    int tamanho;
} TEXTO;

TEXTO* remove_palavra(TEXTO *texto, int base, int offset) {
    int i, j, erase;
    TEXTO *p;
    p = (TEXTO *) malloc(sizeof(TEXTO));

    p->tamanho = texto->tamanho - offset;
    p->lista = (char*) malloc(sizeof(char)*(p->tamanho));
    
    for (i = 0; i < base; i++)
    {
        p->lista[i] = texto->lista[i];
    }
        erase = base + offset;

    for (j = erase; texto->lista[j] != '\0'; j++)
    {
        p->lista[i] = texto->lista[j];
        i++; 
    }
    return p;
}