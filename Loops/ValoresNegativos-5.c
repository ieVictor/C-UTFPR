/*
 Elabore um algoritmo para obter 10 valores do usuário e exibir a quantidade de valores negativos
(menores que zero) que foram informados.
*/

#include <stdio.h>

int main()
{
    // Variable Declaration
    int numero, negativos = 0, i = 1;

    // Data input
    while(i <= 10)
    {
        printf("Give the %d number:", i);
        scanf("%d", &numero);
        i++;

        // Processing
        if(numero < 0)
        {
            negativos++;
        }
    }

    // Output
    printf("\nNegative numbers: %d\n", negativos);
}
