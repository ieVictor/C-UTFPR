/*
Elabore um algoritmo para ler a altura (h) e o sexo de uma pessoa e informar o seu peso ideal. Codifique
a entrada do sexo com “F” para feminino e “M” para masculino. Faça uma função para receber a altura e
o sexo por meio de parâmetros e retornar o peso ideal da pessoa utilizando as seguintes fórmulas:
 Peso ideal para homens = (72.7 * h) - 58
 Peso ideal para mulheres = (62.1 * h) - 44.7
 */

#include <stdio.h>
#include <string.h>

// Function
double calculator(double h, char *g)
{
    // Variable Declaration
    double weight = 0.0;

    if(*g == 'F')
    {
        weight = ((62.1 * h) - 44.7);
    }
    else if(*g == 'M')
    {
        weight = ((72.7 * h) - 58.0);
    }

    return weight;
}


// Main
int main()
{
    // Variable Declaration
    double height, weight;
    char gender[20];

    // Data input
    printf("Give the height:");
    scanf("%lf", &height);

    printf("\nGive the gender:\n");
    printf("Female (F)\n");
    printf("Male (M)\n");
    scanf("%s", gender);

    // Processing
    weight = calculator(height, gender);

    // Data output
    printf("The ideal weight is: %.2lf", weight);
}