#include<stdio.h>

int main(){
    int casos[200];
    int i, n, j, k, num = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        scanf("%d", &casos[i]);
    }
    for (i = 1; i <= n; i++){
        void sequencia(int i, int n, int j, int k, int casos[i], int num);
        sequencia(i, n, j, k, casos, num);
    }
     


    return 0;
}
    void sequencia(int i, int n, int j, int k, int casos[i], int num)
    {
        for (j = 0; j <= casos[i]; j++){
        for (k = 0; k < j; k++){
            num++;
        }
    }
    if (casos[i] == 0)
    printf("caso %d: %d numero\n", i, num);
    else
    printf("caso %d: %d numeros\n", i, num);
        for (j = 0; j <= casos[i]; j++){
            if (j == 0)
                printf(" %d", j);
            else
        for (k = 0; k < j; k++){
            printf(" %d", j);
        }
    }
            printf("\n");
    }