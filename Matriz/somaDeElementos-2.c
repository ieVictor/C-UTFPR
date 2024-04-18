/* 2. Elabore um algoritmo para calcular a soma de todos os elementos de uma matriz 2 x 3 (duas linhas e três
colunas). */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int matrice[2][3], sum = 0;

    // Data input
    for (int i = 0; i <= 2-1; ++i)
    {
        for (int j = 0; j <= 3-1 ; ++j)
        {
            printf("Element (%d, %d):", i+1, j+1);
            scanf("%d", &matrice[i][j]);
        }
    }

    // Processing
    for (int i = 0; i <= 2-1; ++i)
    {
        for (int j = 0; j <= 3-1; ++j)
        {
            sum += matrice[i][j];
        }
    }

    // Data output
    printf("\nThe sum of the elements in matrice is: %d\n", sum);
    return 0;
}