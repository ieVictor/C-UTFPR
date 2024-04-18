/*
Faça uma função para receber um número inteiro por parâmetro e retornar 1 (verdadeiro) se for par
e 0 (falso) se for ímpar. Elabore um algoritmo que utilize a função para verificar se um número fornecido
pelo usuário é zero, par ou ímpar, mostrando a mensagem “ZERO”, “PAR” ou “ÍMPAR”.
 */

#include <stdio.h>

// Função
int verify(int n)
{
    if(n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Corpo
int main()
{
    // Variable declaration
    int number, condition;

    // Data input
    printf("Give a number:");
    scanf("%d", &number);

    // Processing
    condition = verify(number);

    // Data output
    if(number == 0)
    {
        printf("The number %d is ZERO", number);
    }
    else if(condition)
    {
        printf("The number %d is even", number);
    }
    else
    {
        printf("The number %d is odd", number);
    }
}