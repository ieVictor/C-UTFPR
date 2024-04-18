/*
Elabore um algoritmo para obter um número inteiro correspondente ao número de lados de um polígono.
Considere somente os valores 3, 4 ou 5 como entrada.
*/

#include <stdio.h>

void polygonType(int numEdges)
{
    if(numEdges == 3)
    {
        printf("3 Edges = Triangle\n");
    }
    else if(numEdges == 4)
    {
        printf("4 Edges = Square\n");
    }
    else
    {
        printf("5 Edges = Pentagon\n");
    }
}

int main()
{
    // Variable declaration
    int numEdges;

    // Data input
    printf("How many edges (3, 4 or 5):");
    scanf("%d", &numEdges);

    while(numEdges != 3 && numEdges != 4 && numEdges != 5)
    {
        printf("Invalid input!\n\n");
        printf("How many edges (3, 4 or 5):");
        scanf("%d", &numEdges);
    }

    // Processing & Data output
    polygonType(numEdges);

    return 0;
}