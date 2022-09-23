#include <stdio.h>

int trocar(int *num1, int *num2);
int main(){
    int num1, num2;
    printf("Digite 2 números: ");
    scanf("%d %d",&num1, &num2);
    trocar(&num1, &num2);
    printf("Num1: %d - Num2: %d\n",num1, num2);
}

int trocar(int *num1, int *num2){
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}