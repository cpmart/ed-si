#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    int votos[N], candidatos[N]={0,0,0,0,0}, i, primeiro, maior;
    srand(time(NULL));
    for (i=0; i < N; i++){
        votos[i] = (rand() % 5) + 5;
        printf("[%d] = %d\n",i,votos[i]);
    }
    for (i=0; i < N; i++){
        candidatos[votos[i]-5]++; 
        /*if(votos[i]==5)
            candidatos[0]+= 1;
        else if(votos[i]==6)
            candidatos[1]+= 1;
        else if(votos[i]==7)
            candidatos[2]+= 1;
        else if(votos[i]==8)
            candidatos[3]+= 1;
        else 
            candidatos[4]+= 1;*/
    }
    maior = candidatos[0];
    for(i=0; i<5; i++){
        printf("[%d] = %d votos\n",i,candidatos[i]);
        if(candidatos[i]>maior){
            maior = candidatos[i];
            primeiro = i;
        }
    }
    printf("O vencedor é o candidato: %d\n",primeiro);
}