/* 11. Em uma matriz 4 x 12, considere que cada linha representa um funcionário e cada coluna representa o
valor (em milhares de reais) que esse funcionário recebeu de comissão por mês no ano. Com base nessa
matriz, elabore um algoritmo para:
a) Apresentar o total de comissão recebida no ano por um determinado funcionário informado pelo
usuário (número da linha);
b) Apresentar a maior comissão recebida, assim como o funcionário (número da linha) e o mês (número
da coluna) desta comissão. */

#include <stdio.h>

int main()
{
    // Variable Declaration
    float matrice[4][12], comission = 0.0, hCom = 0.0;
    int functionary, hPosition, hMonth;

    // Data input
    printf("Entre the values:\n");
    for (int i = 0; i <= 4-1; ++i)
    {
        printf("\nFunctionary %d -\n", i+1);
        for (int j = 0; j <= 12-1; ++j)
        {
            printf("%d month:", j+1);
            scanf("%f", &matrice[i][j]);
        }
        printf("\n");
    }

    // Selection
    printf("Select a functionary (1/2/3/4):");
    scanf("%d", &functionary);

    // Processing
    for (int i = 0; i <= 12-1; ++i)
    {
        // Functionary Comission Sum
        comission += matrice[functionary-1][i];
    }

    for (int i = 0; i <= 4-1 ; ++i)
    {
        for (int j = 0; j <= 12-1; ++j)
        {
            if(hCom < matrice[i][j])
            {
                hCom = matrice[i][j];
                hMonth = j;
                hPosition = i;
            }
        }
    }

    printf("\nThe functionary %d, received: %.2f in a year!\n", functionary, comission*1000);
    printf("\nHighest Comission -\n");
    printf("Functionary: %d\n", hPosition+1);
    printf("Value: %.2f\n", hCom*1000);
    printf("Month: %d\n", hMonth+1);

    return 0;
}