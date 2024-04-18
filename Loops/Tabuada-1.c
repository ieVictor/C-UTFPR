// Elabore um algoritmo para solicitar ao usuário um número inteiro e apresentar a sua tabuada.

#include <stdio.h>

int main ()
{
    // Declaração das variáveis
    int numero,                     // Variável do número inteiro que será multiplicado
        multiplicador = 1,          // Variável do multiplicador com o valor inicial 1
        resultado;                  // variavél auxiliar para armazenar o resultado

    // Entrada de dados
    printf("De um numero inteiro: ");
    scanf("%d", &numero);

    // (Processamento) Enquanto o multiplicador for menor ou igual a 10 o comando será executado
    while (multiplicador <= 10)
    {
        // Calculo de multiplição do valor inteiro dado
        resultado = numero * multiplicador;

        // Saída formatada
        printf("%d * %d = %d\n", numero, multiplicador, resultado);

        // Incrementação do multiplicador
        multiplicador++;
    }

    return 0;
}