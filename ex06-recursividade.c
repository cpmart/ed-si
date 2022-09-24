#include <stdio.h>

long calcularFatorialLaco(int num);
long calcularFatorialRecursividade(int num);
int main(){
    int num;
    long fatorial;
    printf("Digite um número: ");
    scanf("%d",&num);
    fatorial = calcularFatorialLaco(num);
    printf("Fatorial: %ld\n",fatorial);
    fatorial = calcularFatorialRecursividade(num);
    printf("Fatorial: %ld\n",fatorial);

}
long calcularFatorialLaco(int num){
    int i;
    long fatorial=1;
    for(i=num;i>=1;i--){
        fatorial*=i;
    }
    return fatorial;
}

long calcularFatorialRecursividade(int num){
    if(num==0)
        return 1;
    else
        return num*(calcularFatorialRecursividade(num-1));
}
