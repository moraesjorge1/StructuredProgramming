#include<stdio.h>
#include<stdlib.h>

struct DATA {
	int dia;
	int mes;
	int ano;
};

struct REGISTRO {
	char descricao[1000];
	struct DATA data;
	float valor;
};

struct LIVRO_CAIXA {
	struct REGISTRO vetor[100];
    int total;
};

int main(void) {
    FILE *file;
    char arquivo[20];
    int i;
    int ano;
    float imposto = 0, lucro = 0;
    struct LIVRO_CAIXA caixa;

    scanf("%s %d", arquivo, &ano);

    file = fopen(arquivo, "r+");

    if (file == NULL)
    {
        printf("Nao foi possivel abrir o arquivo");
        return 1;
    }

    fread(&caixa, sizeof(struct LIVRO_CAIXA), 1, file);

    for (i = 0; i < caixa.total; i++)
    {
        if (caixa.vetor[i].data.ano == ano)
        {
            lucro = lucro + caixa.vetor[i].valor;
            imposto = imposto + abs(caixa.vetor[i].valor) * 0.15;
        }
    }

    imposto = imposto + lucro * 0.32;
    printf("R$ %.2f", imposto);

	return 0;
}