/* Elabore um algoritmo para realizar a concatenação de dois vetores de números reais, u e v, em um terceiro
vetor, x. Como os vetores que serão concatenados podem ter qualquer número de elementos, o número
de elementos dos vetores u e v deve ser solicitado para o usuário. O tamanho do vetor x é a soma do
número de elementos de u e de v. */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int i, j, l, m, n;

    // Data input for array size
    printf("Array (u) size:");
    scanf("%d", &i);

    printf("Array (v) size:");
    scanf("%d", &j);
    printf("\n");

    // Array Declaration
    float u[i], v[j], x[i + j];

    // Data Input arrays value
    for(int k = 0; k <= i-1; k++) // Values to U
    {
        printf("%d. Value of u:", k+1);
        scanf("%f", &u[k]);
    }
    printf("\n");

    for(int k = 0; k <= j-1; k++) // Values to V
    {
        printf("%d. Value of v:", k+1);
        scanf("%f", &v[k]);
    }
    printf("\n");

    // Processing
    for(l = 0; l < i; l++) // Values of u[] to x[n >= i; n < j]
    {
        x[l] = u[l];
    }

    for(m = 0; m < j; m++) // Values of v[] to x[n > i; n <= j]
    {
        x[l] = v[m];
        l++;
    }

    // Data output
    for(n = 0; n <= i + j - 1; n++)
    {
        printf("%.1f, ", x[n]);
    }

    return 0;

}