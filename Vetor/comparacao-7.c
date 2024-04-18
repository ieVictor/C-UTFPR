/* Faça um algoritmo para obter dois vetores V1 e V2 de 10 números inteiros cada, calcular e apresentar a
quantidade de vezes que esses vetores possuem números iguais nas mesmas posições.
*/

#include <stdio.h>

int main()
{
    // Variable Declaration
    int V1[10], V2[10], equals = 0;

    // Data input V1
    for(int i = 0; i <= 10-1; i++)
    {
        printf("V1 - %d. Give a number:", i+1);
        scanf("%d", &V1[i]);
    }

    // Data input V2
    for(int j = 0; j <= 10-1; j++)
    {
        printf("V2 - %d. Give a number:", j+1);
        scanf("%d", &V2[j]);
    }

    // Processing
    for(int k = 0; k <= 10-1; k++)
    {
       if(V1[k] == V2[k])
       {
           equals++;
       }
    }

    // Data output
    printf("\n");
    printf("Number of equal elements: %d", equals);

    return 0;
}