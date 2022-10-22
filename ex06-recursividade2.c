#include <stdio.h>

int f1(int n)
{
    if (n == 0)
        return (1);
    else
        return (n + f1(n - 1));
}

int main()
{
    printf("%d\n",f1(0));
    printf("%d\n",f1(1));
    printf("%d\n",f1(3));
}

