/*
4. Dada uma matriz quadrada de ordem 4, elabore um algoritmo para calcular a soma de todos os:
a) Elementos da linha 3;
b) Elementos da coluna 2;
c) Elementos da diagonal principal;
d) Elementos da diagonal secundária.

 Observação: a diagonal principal de uma matriz quadrada de ordem n é formada pelos elementos aij tal
que i = j; a diagonal secundária de uma matriz quadrada de ordem n é formada pelos elementos aij tal que
i + j = n + 1
*/

#include <stdio.h>

int main()
{
    // Varible Declaration
    int matrice[4][4], sumLine = 0, sumColumn = 0, sumDiagonal = 0, sumDiagonal2 = 0;

    // Data input
    for (int i = 0; i <= 4-1; ++i)
    {
        for (int j = 0; j <= 4-1; ++j)
        {
            printf("Element (%d, %d):", i+1, j+1);
            scanf("%d", &matrice[i][j]);
        }
    }

    // Processing SumLine 3
    for (int i = 3-1; i == 3-1; ++i)
    {
        for (int j = 0; j <= 4-1; ++j)
        {
            sumLine += matrice[i][j];
        }
    }

    // Processing SumColum
    for (int i = 2-1; i == 2-1; ++i)
    {
        for (int j = 0; j <= 4-1; ++j)
        {
            sumColumn += matrice[j][i];
        }
    }
    
    // Processing primary SumDiagonal
    for (int i = 0; i <= 4-1; ++i)
    {
        sumDiagonal += matrice[i][i];
    }

    // Processing secundary SumDiagonal
    for(int i = 0, j = 4-1; i <= 4-1; i++, j--)
    {
        sumDiagonal2 += matrice[i][j];
    }

    // Data Output
    printf("\n3. line elements sum: %d\n", sumLine);
    printf("2. Column elementes sum: %d\n", sumColumn);
    printf("Principal diagonal sum: %d\n", sumDiagonal);
    printf("Secundary diagonal sum: %d\n", sumDiagonal2);
}
