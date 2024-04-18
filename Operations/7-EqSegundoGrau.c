// Elabore um algoritmo para calcular as raízes de uma equação de segundo grau que utilize a fórmula de
// Bhaskara.

#include <stdio.h>
#include <math.h>

int main ()
{
    // Variables declaration
    int a, b, c;
    int delta, x1, x2;

    // Data input
    printf("A:");
    scanf("%d", &a);
    printf("B:");
    scanf("%d", &b);
    printf("C:");
    scanf("%d", &c);

    // Processing
    delta = pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    // Output
    printf("X' = %d\n", x1);
    printf("X'' = %d\n", x2);

}
