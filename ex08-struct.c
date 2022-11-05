#include <stdio.h>
#define N 5
struct Pessoa
{
    int codigo;
    char nome[10];
    float salario;
};
typedef struct Pessoa Pessoa;

void preencher(Pessoa aluno[]);
void ordenar(Pessoa aluno[]);
void imprimir(Pessoa aluno[]);

int main()
{
    Pessoa aluno[N];
    preencher(aluno);
    ordenar(aluno);
    imprimir(aluno);
}

void preencher(Pessoa aluno[]){
    for (int i = 0; i < N; i++)
    {
        printf("Código.: ");
        scanf("%d", &aluno[i].codigo);
        printf("Nome...: ");
        scanf("%s", aluno[i].nome);
        printf("Salario: ");
        scanf("%f", &aluno[i].salario);
    }
}

void ordenar(Pessoa aluno[]){
    Pessoa aux;
    for(int i=0; i<(N-1); i++){
        if(aluno[i].salario > aluno[i+1].salario){
            aux = aluno[i];
            aluno[i] = aluno[i+1];
            aluno[i+1] = aux;
            i=-1;
        }
    }
}
void imprimir(Pessoa aluno[])
{
    printf("---------------\n");
    for (int i = 0; i < N; i++)
    {
        printf("Código.: %d\n", aluno[i].codigo);
        printf("Nome...: %s\n", aluno[i].nome);
        printf("Salario: %g\n", aluno[i].salario);
    }
}