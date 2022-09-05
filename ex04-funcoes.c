#include <stdio.h>

//Protótipos = declaração
void mostrarNomeFatec();
void mostrarSoma(int n1, int n2);
int retornarDobro(int numero);
float retornaPI(void);

int main(){
    int retorno, x=10;
    mostrarNomeFatec();     //chamada da função
    mostrarSoma(5,10);
    retorno = retornarDobro(x);
    printf("Retorno: %d\n",retorno);
    printf("PI: %g\n",retornaPI());
}

void mostrarNomeFatec(){        //implementação da função
    printf("Fatec Jales\n");
}

void mostrarSoma(int n1, int n2){
    printf("Soma: %d\n",n1+n2);
}

int retornarDobro(int numero){
    numero = 2*numero;
    return numero;
}

float retornaPI(void){
    return 3.14159;
}