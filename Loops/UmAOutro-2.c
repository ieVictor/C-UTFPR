/* Elabore um algoritmo para mostrar todos os números a
 partir do zero até um número positivo fornecido
 pelo usuário. */

#include <stdio.h>

int main ()
{
    // Variable Declaration
    int num, i = 0;

    // Data input
    printf("Give a number:");
    scanf("%d", &num);

    // Output
    while(i <= num)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}


