/*****************************

Faça um algoritmo para mostrar todos os números ímpares do intervalo de 1 até um número positivo
fornecido pelo usuário.

******************************/

#include <stdio.h>

int main()
{
    // Variable Declaration
    int num, i = 1;

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