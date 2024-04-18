/* 6. Elabore um algoritmo para calcular a matriz transposta de uma matriz n x m.
Observação: a matriz transposta é a matriz que se obtém da troca de linhas por colunas de uma dada
matriz. */

#include <stdio.h>

int main()
{
    // Variable Declaration (Matrice order)
    int n, m;

    // Data input
    printf("Matrice Lines:");
    scanf("%d", &n);

    printf("Matrice Columns:");
    scanf("%d", &m);

    printf("\n");


    // Matrice Declaration
    int matrice[n][m], matriceT[m][n];

    // Data input
    for (int i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= m-1; ++j)
        {
            printf("Element (%d, %d):", i+1, j+1);
            scanf("%d", &matrice[i][j]);
        }
    }

    // Processing
    for (int i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= m-1; ++j)
        {
            matriceT[j][i] = matrice[i][j];
        }
    }

    // Data output
    printf("\n");
    printf("Matrice:\n");
    for (int i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= m-1; ++j)
        {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    // Print transposed matrice
    printf("\n");
    printf("Transposed Matrice:\n");
    for (int i = 0; i <= m-1; ++i)
    {
        for (int j = 0; j <= n-1; ++j)
        {
            printf("%d ", matriceT[i][j]);
        }
        printf("\n");
    }

    return 0;
}