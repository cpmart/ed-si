#include <stdio.h>
#define N 5

struct TipoNodo
{
    int codigo;
    char nome[10];
    float salario;
};

typedef struct TipoNodo TipoNodo;
int menu();
int inserirInicio(TipoNodo  LL[], int IA, int FA, int *IL, int *FL, TipoNodo infoNodo);
int mostrar(TipoNodo  LL[], int IA, int FA, int IL, int FL);

int main()
{
    TipoNodo LL[N], infoNodo;
    int IA = 0, FA = N - 1, IL = -1, FL = -1, op;
    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            printf("Código.: ");
            scanf("%d",&infoNodo.codigo);
            printf("Nome...: ");
            scanf("%s",infoNodo.nome);
            printf("Salário: ");
            scanf("%f",&infoNodo.salario);
            inserirInicio(LL, IA, FA, &IL, &FL, infoNodo);
            break;
        case 2:
            mostrar(LL, IA, FA, IL, FL);
            break;
        case 0:
            printf("Já vai tarde, animal!!!\n");
            break;
        default:
            printf("Opção inválida!!!\n");
            break;
        }

    } while (op != 0);
}

int menu()
{
    int op;
    printf("@@@@@@@@@@ M E N U @@@@@@@@@@@\n");
    printf("[1] Inserir no Início\n");
    
    printf("[2] Mostrar o Arranjo\n");
    printf("[0] Sair\n");
    printf("Escolha a opção: ");
    scanf("%d", &op);
    return op;
}

int inserirInicio(TipoNodo  LL[], int IA, int FA, int *IL, int *FL, TipoNodo infoNodo){
    if (IA == *IL && FA == *FL) 
        return 1; //deu erro - lista cheia!!
    else {
        if (*IL == -1)//Se LL vazio
            *IL = *FL = IA;
        else if (*IL > IA) //Se tiver espaço
            *IL = *IL-1;                  //no início da lista
        else{       
            for(int i=*FL; i>=*IL; i--)
                LL[i+1] = LL[i];
            *FL = *FL+1;
        }
        LL[*IL] = infoNodo;
        return 0;
    }
}

int mostrar(TipoNodo  LL[], int IA, int FA, int IL, int FL){
    for(int i=IA; i<=FA; i++){
        if(i>=IL && i<=FL)
            printf("%4d - %g - %s\n",LL[i].codigo, LL[i].salario, LL[i].nome);
        else
            printf("--------------\n");
    }
}