#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if (n<2)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int num=0,res=0,i;
    printf("::NUMEROS DE FIBONACCI::n");
    printf("Introduce el numero de numeros: ");scanf("%i",&num);
    printf("t");
    for( i=0;i<=num-1;i++)
    {
        res = fibonacci(i);
        printf("%i  ", res);
    }
    printf("n");
    return 0;
}
