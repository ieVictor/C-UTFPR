/********************************

Faça um algoritmo para mostrar todos os números pares do intervalo de 1 até um número positivo
fornecido pelo usuário.

*********************************/

#include <stdio.h>

int main ()
{
    // Variable declaration
    int num, i = 2;

    // Data input
    printf("Give a number:");
    scanf("%d", &num);

    // Output
    while(i <= num)
    {
        printf("%d\n", i);
        i += 2;
    }
    return 0;
}