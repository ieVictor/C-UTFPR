/*5. Faça um algoritmo para obter um valor qualquer e depois perguntar ao usuário se este valor está em
dólares ou em reais e fazer o seguinte:
Caso a escolha do usuário for dólares, converter o valor para reais;
Caso a escolha do usuário for reais, converter o valor para dólares. */

#include <stdio.h>

int main ()
{
    // Variable declaration
    char coin; // coin selector variable
    double value, // primary value
            quotation, // the quotation value
            valueConverted; // converted value

    // Data input
    printf("Digite um valor:");
    scanf("%lf", &value); // takes de first value

    printf("Escolha a moeda:\n");
    printf("(D) - Dolares para Reais\n");
    printf("(R) - Reais para Dolares\n");
    scanf("%s", &coin); // selects the currency

    // Processing & Output
    if(coin == 'D' || coin == 'd') // If the currency selected is dollar
    {
        printf("Digite a cotacao atual do Dolar:");
        scanf("%lf", &quotation);
        valueConverted = value * quotation; // converts dollar to real
        printf("Seu valor: %.2lf\n", value);
        printf("Cotacao do dolar: %.2lf\n", quotation);
        printf("Valor em reais: %.2lf\n", valueConverted);
    }

    else if (coin == 'R' || coin == 'r') // If the currency selected is reais
    {
       printf("Qual a cotacao atual do Dolar:");
       scanf("%lf", &quotation);
       valueConverted = value / quotation; // converts real to dollar
       printf("Seu valor: %.2lf\n", value);
       printf("Cotacao do dolar: %.2lf\n", quotation);
       printf("Valor em dolar: %.2lf\n", valueConverted);
    }
    else // if the chosen value is different from D or R
    {
       printf("Opcao invalida.\n");
    }

    return 0;
}
