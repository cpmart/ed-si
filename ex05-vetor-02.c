#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main()
{
    int vA[N], vB[N], i;
    srand(time(NULL));
    for (i = 0; i < N; i++){
        vA[i] = rand() % 11;
        printf("vA[%d]=%d\n",i,vA[i]);
    }
    for (i = 0; i < N; i++){
        vB[(N-1)-i] = vA[i];
    }
    for (i = 0; i < N; i++){
        printf("vA[%2d]=%2d - vB[%d]=%d\n",i,vA[i],i,vB[i]);
    }
}