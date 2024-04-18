/* 7. Elabore um algoritmo para calcular a soma de todos os elementos abaixo da diagonal principal de uma
matriz quadrada de ordem n.
 */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int n, sum = 0;

    // Data input
    printf("Matrice Order:");
    scanf("%d", &n);

    // Matrice Declaration
    int matrice[n][n];

    // Data input
    for (int i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= n-1; ++j)
        {
            printf("Element (%d, %d):", i+1, j+1);
            scanf("%d", &matrice[i][j]);
        }
    }

    // Processing
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            sum += matrice[i][j];
        }
    }

    // Data Output
    printf("\nSum: %d", sum);
    return 0;
}