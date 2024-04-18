// 2. Elabore um algoritmo para calcular: 𝑥² e 𝑥³

#include <stdio.h>
#include <math.h>

int main()
{
    // Variables declaration
    int x, quadrado, cubo;

    // Data input
    printf("Valor de X:");
    scanf("%d", &x);

    // Processing
    quadrado = pow(x, 2);
    cubo = pow(x, 3);

    // Output
    printf("X^2 = %d\n", quadrado);
    printf("X^3 = %d\n", cubo);

    return 0;
}
