#include <stdio.h>

int preencher(int *a, int *b);
int main(){
    int num1, num2;
    printf("Digite 2 valores: ");
    preencher(&num1, &num2);
    printf("num1: %d - num2: %d\n",num1, num2);
    return 0;
}

int preencher(int *a, int *b){
    scanf("%d", a);
    scanf("%d", b);
    return 0;
}