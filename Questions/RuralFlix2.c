#include<stdio.h>

int main(){
    
    char arquivo[20];
    scanf("%s", arquivo);
    
    FILE *file;
    file = fopen(arquivo, "r");

    if (file == NULL)
    {
        printf("O arquivo nao pode ser aberto");
        return 0;
    }
    int n, nv, na;
    fscanf(file, "%d %d %d", &n, &nv, &na);

    int video, usuario; 
    float nota;
    int i; 
    float soma_nota[1000] = {0}; 
    int ocorrencia[1000] = {0};
    float media[1001];
    int maior = 0;
    float rating = 0;
    for (i = 0; i < na; i++)
    {
        fscanf(file, "%d %d %f", &usuario, &video, &nota);
        soma_nota[video] = soma_nota[video] + nota;
        ocorrencia[video]++;
        media[video] = soma_nota[video] / ocorrencia[video];
        if (media[video] > rating)
        rating = media[video];
        maior = video;
    }
    for (i = 0; i < na; i++) //não sei se acertei o caso de 10% das avaliações, mas aparentemente ta dando certo, pois eu zero a media caso o numero de ocorrencias seja menor que 10% das av.
    {
        if (ocorrencia[i] < 1/10 * na);
        media[i] = 0;   
    } 
        printf("%d ", maior);
        
        fclose(file);
    return 0;
}