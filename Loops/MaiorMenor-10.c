/*
 * Faça um algoritmo para solicitar 10 valores positivos para o usuário e, ao final, exibir o maior e o menor
 * desses valores.
 * Aluno: Victor Gabriel Lucio
 * Curso: 1ADS
 * Período: Noturno
 */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int value, counter = 1, major, minor = 999999;

    // Data input
    while(counter <= 10) // loop to get 10 values from the user
    {
        printf("Give the %d value:", counter);
        scanf("%d", &value);

        // Checks if the value entered is larger than the largest value already entered
        if(value > major)
        {
            major = value;
        }
        // Checks if the value entered is smaller than the smallest value already entered
        else if (value < minor)
        {
            minor = value;
        }

        counter++; // increments the counter value by one
    }
    // Print's the major and the minor value.
    printf("\nThe major value is %d, and the minor is %d.\n", major, minor);

    return 0;
}
