#include <stdio.h>

int main()
{
    unsigned int fatorial;
    for (int valor = 5; valor <= 20; valor += 5)
    {
        fatorial = 1;
        for (int i = 1; i <= valor; i++)
        {
            fatorial = fatorial * i;
        }
    }
}