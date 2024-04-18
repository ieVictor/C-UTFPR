/* Dada uma matriz quadrada de ordem 3 de números inteiros positivos distintos, elabore um algoritmo para
determinar o valor do elemento aij da matriz. O número da linha e da coluna do elemento devem ser
informados pelo usuário. */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int matrice[3][3], line, column;

    // Data input
    for (int i = 0; i <= 3-1; ++i)
    {
        for (int j = 0; j <= 3-1; ++j)
        {
            printf("Element (%d, %d):", i+1, j+1);
            scanf("%d", &matrice[i][j]);
        }
    }
    printf("\n");

    printf("The line:");
    scanf("%d", &line);

    printf("The column:");
    scanf("%d", &column);

    // Data output
    printf("\nThe element in A(%d, %d) is: %d", line, column, matrice[line-1][column-1]);
    return 0;
}

