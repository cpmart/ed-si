#include <stdio.h>
#define N 5

int main()
{
    int vetor[N], i, soma = 0;
    for (i = 0; i < N; i++)
    {
        printf("Digite o [%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Imprimindo tudo....\n");
    for (i = 0; i < N; i++)
        printf("[%d]: %d\n", i, vetor[i]);

    printf("Imprimindo os pares....\n");
    for (i = 0; i < N; i++){
        if(vetor[i]%2==0){
            printf("[%d]: %d\n", i, vetor[i]);
        }
    }
    for (i = 0; i < N; i++)
    {
        soma += vetor[i];
    }
    printf("Total da soma: %d\n", soma);
}