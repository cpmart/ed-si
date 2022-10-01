#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main()
{
    int vA[N], vB[N], vC[2*N], i;
    srand(time(NULL));
    for (i=0; i < N; i++){
        vA[i] = rand() % 11;
        vB[i] = rand() % 11;
    }
    for(i=0; i<N; i++){
        vC[i] = vA[i];
        vC[N+i] = vB[i];
    }
    for(i=0; i<N; i++){
        printf("A[%d] = %2d - B[%d] = %2d\n",i,vA[i],i,vB[i]);
    }
    for(i=0; i<2*N; i++){
        printf("C[%d] = %2d\n",i,vC[i]);
    }
}