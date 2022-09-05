#include <stdio.h>

int soma(int num1, int num2);

int main(){
    int num1, num2, resultado;
    printf("Digite 2 números: ");
    scanf("%d %d",&num1, &num2);

    resultado = soma(num1, num2);
    printf("Soma: %d\n",resultado);
}

int soma(int num1, int num2){
    return num1+num2;
}