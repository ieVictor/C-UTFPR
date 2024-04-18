/* Na teoria dos sistemas, o elemento minimax de uma matriz consiste no menor elemento de uma linha
onde se encontra o maior elemento da matriz. Faça um algoritmo para obter uma matriz quadrada de
ordem n e determinar o valor do seu elemento minimax e a posição deste elemento na matriz (linha e
coluna). Considere que os valores dos elementos da matriz são todos inteiros positivos.
 */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int n, maxLine, max = 0, min = 99999, minColumn, i;

    // Data input
    printf("Matrice Order:");
    scanf("%d", &n);
    printf("\n");

    // Matrice Declaration
    int matrice[n][n];

    // Data input
    for (i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= n-1; ++j)
        {
            printf("Element (%d, %d):", i+1, j+1);
            scanf("%d", &matrice[i][j]);
        }
    }

    // Processing
    for (i = 0; i <= n-1; ++i)
    {
        for (int j = 0; j <= n-1 ; ++j)
        {
            if(matrice[i][j] > max)
            {
                max = matrice[i][j];
                maxLine = i;
            }
        }
    }

    for (int j = 0; j <= n-1; ++j)
    {
        if(matrice[maxLine][j] < min)
        {
            min = matrice[maxLine][j];
        }
    }

    // Data output
    printf("Max: %d, line %d.\n", max, maxLine);
    printf("\nMin: %d\n", min);



    return 0;
}