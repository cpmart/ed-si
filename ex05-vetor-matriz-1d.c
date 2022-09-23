#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    // Entrando com valores sem digitação
    int vetor1[5] = {10, 20, 50, 100, 30};
    int vetor2[5];
    vetor2[0] = 10;
    vetor2[1] = 20;
    vetor2[2] = 50;
    vetor2[3] = 100;
    vetor2[4] = 30;

    // Entrando com valores com digitação
    int vetor3[5];
    printf("Digite 5 valores: ");
    scanf("%d", &vetor3[0]);
    scanf("%d", &vetor3[1]);
    scanf("%d", &vetor3[2]);
    scanf("%d", &vetor3[3]);
    scanf("%d", &vetor3[4]);

    // Entrando com valores usando laço
    int vetor4[5];
    for (i = 0; i < 5; i++)
    {
        vetor4[i] = i * 10;
    }
    // Entrando com valores aleatórios usando laço
    int vetor5[5];
    srand(time(NULL)); // srand() e time() nas bibliotecas stdlib.h e time.h
    for (size_t i = 0; i < 5; i++)
    {
        vetor5[i] = rand() % 11 + 20; // rand() na biblioteca stdlib.h
    }
}