/* Faça um algoritmo para obter duas matrizes A e B (ambas n x m) e calcular a matriz
C = A + B, tal que cij = aij + bij, para i = 1, 2, ... , n; j = 1, 2, ..., m. Apresentar as matrizes A, B e C. */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int n, m;

    // Data input
    printf("Matrice Lines:");
    scanf("%d", &n);

    printf("Matrice Columns:");
    scanf("%d", &m);

    // Matrice Declaration
    int matriceA[n][m], matriceB[n][m], sumMatrice[n][m];

    // Data input
    printf("\nA. Matrice Elements:\n");
    for (int i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= m-1; ++j)
        {
            printf("Element (%d, %d):", i+1, j+1);
            scanf("%d", &matriceA[i][j]);
        }
    }

    printf("\nB. Matrice Elements:\n");
    for (int i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= n-1; ++j)
        {
            printf("Element (%d, %d):", i+1, j+1);
            scanf("%d", &matriceB[i][j]);
        }
    }

    // Processing
    for (int i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= n-1; ++j)
        {
            sumMatrice[i][j] = matriceA[i][j] + matriceB[i][j];
        }
    }

    // Data output
    printf("\nA:\n");
    for (int i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= m-1; ++j)
        {
            printf("%d ", matriceA[i][j]);
        }
        printf("\n");
    }

    printf("\nB:\n");
    for (int i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= m-1; ++j)
        {
            printf("%d ", matriceB[i][j]);
        }
        printf("\n");
    }

    printf("\nC(A+B):\n");
    for (int i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= m-1; ++j)
        {
            printf("%d ", sumMatrice[i][j]);
        }
        printf("\n");
    }

}
