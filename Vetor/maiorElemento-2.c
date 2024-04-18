/* Elabore um algoritmo para obter um conjunto de 20 elementos (números inteiros positivos), identificar o
maior elemento e a sua respectiva posição no conjunto. */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int number[20], highest = 0, position;

    // Data input
    for(int i = 0; i <= 20-1; i++)
    {
        printf("%d. Give a number:", i+1);
        scanf("%d", &number[i]);

        // Processing
        if(number[i] > highest)
        {
            highest = number[i];
            position = i + 1;
        }
    }

    // Data output
    printf("\nThe highest element\n");
    printf("Value: %d\n", highest);
    printf("Position: %d\n", position);

    return 0;

}