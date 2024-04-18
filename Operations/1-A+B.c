// 1. Elabore um algoritmo para calcular: (𝑎 + 𝑏)²

#include <stdio.h>
#include <math.h>

int main ()
{
    // Variables declaration
    int a, b;
    int qs;

    // Data Input
    printf("Valor de a: ");
    scanf("%d", &a);
    printf("Valor de b: ");
    scanf("%d", &b);

    // Processing
    qs = pow((a+b), 2); // OU (a + b) * (a + b)

    // Output
    printf("(%d + %d)^2 = %d\n", a, b, qs);

    return 0;
}
