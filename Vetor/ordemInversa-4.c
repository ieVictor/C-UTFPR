/* Elabore um algoritmo para obter um conjunto de 10 elementos e apresentar os seus elementos na ordem
inversa. */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int numbers[10];

    // Data input
    for(int i = 0; i <= 10-1; i++)
    {
        printf("%d. Give a number:", i+1);
        scanf("%d", &numbers[i]);
    }

    // Data output
    for(int i = 9; i >= 0; i--)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}