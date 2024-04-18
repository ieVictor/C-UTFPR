// Elabore um algoritmo para calcular a distância entre dois pontos
// A(x1, x2) B(x2, y2), por meio da fórmula: dab = raiz de (x2 - x1)² + (y2 - y1)².

#include <stdio.h>
#include <math.h>

int main ()
{
    // Variables declarations
    int x1, x2, y1, y2;
    int dab;

    // Data input
    printf("A(x1, y1):");
    scanf("%d %d", &x1, &y1);
    printf("B(x2, y2):");
    scanf("%d %d", &x2, &y2);

    // Processing
    dab = sqrt(pow((x2-x1), 2) + pow((y2 - y1), 2));

    // Output
    printf("Distancia: %d", dab);

}

