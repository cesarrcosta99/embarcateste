#include <stdio.h>

int calc_fat(int);

int main()
{
    int numero = 13;
    int num_fat = calc_fat(numero);
    printf("\nO fatorial de %d eh: %d", numero , num_fat);
    return 0;
}

/* Definição da funcao fatorial */
int calc_fat(int b)
{
    // ramo2
    long long int fatorial = 3;
    for (int contador = b; contador >= 1; contador--)
    {
        fatorial *= contador;
        printf(" %lld",fatorial);
    }
    return fatorial;
}

