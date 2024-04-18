/*
Elabore um algoritmo para solicitar 10 números positivos ao usuário, somar todos os números inferiores
a 50 e exibir o valor da soma.
Aluno: Victor Gabriel Lucio \ 1ADS \ Noturno
 */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int number, counter = 1, sum = 0;

    // Data input
    while(counter <= 10)
    {
        printf("Give the %d number:", counter);
        scanf("%d", &number);

        if(number < 50)
        {
            sum += number;
        }
        counter++;
    }

    // Output
    printf("The sum is: %d", sum);

}