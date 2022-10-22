#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 4
#define C 5
#define P 3

int main()
{
    int l, c, p, matriz[P][L][C];
    for (p = 0; p < P; p++)
    {
        for (l = 0; l < L; l++)
        {
            for (c = 0; c < C; c++)
            {
                matriz[p][l][c] = rand() % 11;
            }
        }
    }

    for (p = 0; p < P; p++)
    {
        for (l = 0; l < L; l++)
        {
            for (c = 0; c < C; c++)
            {
                printf("%2d  ", matriz[p][l][c]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
}