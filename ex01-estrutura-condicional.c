#include <stdio.h>

int main(){
    float temperatura;
    printf("Digite a temperatura: ");
    scanf("%f",&temperatura);
    if(temperatura<21)
        printf("Frio\n");
    else if(temperatura<31)
        printf("Agradável\n");
    else
        printf("Quente\n");
}