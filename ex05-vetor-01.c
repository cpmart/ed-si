#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main()
{
    int vetor[N], i, maior, menor, total = 0;
    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        vetor[i] = rand() % 11;
        total += vetor[i];
        printf("[%d] = %2d\n", i, vetor[i]);
    }
    maior = menor = vetor[0];
    for (i = 1; i < N; i++)
    {
/*      if (vetor[i] > maior)
            maior = vetor[i];
        if (vetor[i] < menor)
            menor = vetor[i];*/
        maior = vetor[i] > maior ? vetor[i] : maior;
        menor = vetor[i] < menor ? vetor[i] : menor;
    }
    printf("Maior: %2d\n", maior);
    printf("Menor: %2d\n", menor);
    printf("Total: %2d\n", total);
}