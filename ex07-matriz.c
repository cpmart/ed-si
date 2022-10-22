#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 4
#define C 5

int main()
{
    int l, c, p, matriz[L][C], vetorLinha[L],vetorColuna[C];
    srand(time(NULL));
    for (l = 0; l < L; l++)
    {
        vetorLinha[l]=0;
        for (c = 0; c < C; c++)
        {
            matriz[l][c] = rand() % 11;
        }
    }
    for (c = 0; c < C; c++)
    {
        vetorColuna[c]=0;
    }

    for (l = 0; l < L; l++)
    {
        for (c = 0; c < C; c++)
        {
            printf("%2d  ", matriz[l][c]);
            vetorLinha[l] += matriz[l][c];
        }
        printf("=  %d\n", vetorLinha[l]);
    }
    printf("------------------------------\n");
    for (c = 0; c < C; c++)
    {
        for (l = 0; l < L; l++)
        {
            vetorColuna[c] += matriz[l][c];
        }
        printf("%2d  ", vetorColuna[c]);
    }
    printf("\n");
}