/**************************

Faça um algoritmo para calcular o resultado de uma divisão representada por uma fração.
Solicitar ao usuário o numerador (termo superior da fração) e o denominador (termo inferior da fração) e,
se o denominador for igual a zero, mostrar a mensagem “Erro: divisão por zero” e solicitar novamente somente o denominador.
A divisão somente será realizada quando o usuário entrar com um denominador diferente de zero.

Atenção: O algoritmo deve utilizar necessariamente a técnica de entrada de dados com crítica utilizando uma estrutura de repetição com teste no final (do-while).

***************************/

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    float numerador,        // Termo Superior da fração
    denominador,            // Termo inferior da fração
    divisao;                // Auxiliar que armazena o resultado da fração

    // Entrada de dados
    do
    {
        printf("Digite o numerador:");
        scanf("%f", &numerador);

        printf("Digite o denominador:");
        scanf("%f", &denominador);

        while(denominador == 0.0)
        {
            printf("Erro: Divisao por zero!!\n");
            printf("Digite um novo denominador:");
            scanf("%f", &denominador);
        }
    }
    while(denominador == 0.0);

    // Processamento
    divisao = numerador / denominador;

    // Saída de dados
    printf("%.1f / %.1f = %.1f", numerador, denominador, divisao);

    return 0;
}
