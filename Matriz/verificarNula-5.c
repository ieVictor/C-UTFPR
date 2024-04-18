/* 5. Dada uma matriz quadrada de ordem n, verificar se é uma matriz nula.
Observação: Uma matriz nula é um tipo especial de matriz na qual todos os seus elementos são iguais
a zero. */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int n, flag = 0;

    // Data input
    printf("Matrice order:");
    scanf("%d", &n);
    printf("\n");

    // Matrice Declaration
    int matrice[n][n];

    // Data input (Matrice Elements)
    for (int i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= n-1; ++j)
        {
            printf("Element (%d, %d):", i+1, j+1);
            scanf("%d", &matrice[i][j]);
        }
    }

    // Processing
    for (int i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= n-1; ++j)
        {
            if(matrice[i][j] != 0)
            {
                flag = 1;
            }
        }
    }

    // Data output
    if(flag)
    {
        printf("The order %d matrice isn't null!\n", n);
    }
    else
    {
        printf("The order %d matrice is null!\n", n);
    }

    return 0;
}