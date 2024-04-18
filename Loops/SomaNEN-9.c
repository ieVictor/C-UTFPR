/*
 * Faça um algoritmo para obter dois números inteiros positivos do usuário e calcular a soma dos números
 * inteiros existentes entre os dois números fornecidos (inclusive os que foram fornecidos). Considere que o
 * segundo número fornecido será sempre maior que o primeiro
 * Aluno: Victor Gabriel Lucio \ 1ADS \ NOTURNO
 */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int num1, num2, sum = 0, aux;

    // Data input
    printf("Give the first number:");
    scanf("%d", &num1);

    printf("Give the second number:");
    scanf("%d", &num2);

    // Processing
    aux = num1;
    while(aux <= num2)
    {
        sum += aux;
        aux++;
    }

    // Output
    printf("\nThe sum of the numbers between %d and %d is: %d\n", num1, num2, sum);
    return 0;
}