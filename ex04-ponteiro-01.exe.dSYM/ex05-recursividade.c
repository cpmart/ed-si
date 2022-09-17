#include <stdio.h>

long fat(int num);
int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d",&num);
    /*for(int i=num; i>=1; i--){
        fatorial *= i;
    }*/
    printf("Fatorial de %d é: %ld\n",num, fat(num));
}

long fat(int num){
    if(num == 0)
        return 1;
    else
        return num*fat(num-1);
}