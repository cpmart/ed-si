#include <stdio.h>

int main()
{
    int numero, i;
    unsigned long fatorial = 1;
    printf("Digite um número: ");
    scanf("%d", &numero);

    for (i = numero; i > 1; i--)
    {
        fatorial *= i;
    }
    printf("FOR - Fatorial de %d: %lu\n", numero, fatorial);
    i = numero;
    fatorial = 1;
    while (i > 1)
    {
        fatorial *= i--;
    }
    printf("WHILE - Fatorial de %d: %lu\n", numero, fatorial);
    i = numero;
    fatorial = 1;
    if (numero > 1)
        do
        {
            fatorial *= i--;
        } while (i > 1);
    printf("DO WHILE - Fatorial de %d: %lu\n", numero, fatorial);
}