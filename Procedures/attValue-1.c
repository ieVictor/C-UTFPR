/*
Faça um procedimento para atualizar um valor de acordo com um índice e calcular a diferença entre o
valor original e o valor atualizado. Elabore um algoritmo para testar o procedimento.
*/

#include <stdio.h>

// Function to make the calculation
void calc(double *value, double index, double *diff)
{
    double orgValue;

    orgValue = *value;
    *value = *value + *value * index;
    *diff = *value - orgValue;
}

// Programm
int main()
{
    // Variable declaration
    double value, index, diff, orgValue;

    // Data input
    printf("Enter the value:");
    scanf("%lf", &value);

    printf("Enter the index:");
    scanf("%lf", &index);

    // Processing
    orgValue = value;
    calc(&value, index, &diff);

    // Data output
    printf("The value R$ %.2lf updatade in %.2lf\n", orgValue, index);
    printf("is equal R$ %.2lf\n", value);
    printf("The difference is R$ %.2lf", diff);

    return 0;

}