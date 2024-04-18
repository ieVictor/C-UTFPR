/* 1. Faça um algoritmo para obter e apresentar uma matriz quadrada de ordem 3 cujos elementos são
números inteiros positivos. */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int matrice[3][3];

    // Data input
    for(int i = 0; i <= 3-1; i++)
    {
        for (int j = 0; j <= 3-1 ; ++j)
        {
            printf("Element (%d, %d):", i+1, j+1);
            scanf("%d", &matrice[i][j]);
        }
    }

    // Data output
    for(int i = 0; i <= 3-1; i++)
    {
        for (int j = 0; j <= 3-1; ++j)
        {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}
