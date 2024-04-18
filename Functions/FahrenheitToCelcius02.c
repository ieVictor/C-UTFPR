/*
Faça um algoritmo para obter do usuário uma temperatura em graus Fahrenheit e utilizar uma função
para calcular e retornar o valor correspondente em graus Celsius de acordo com a seguinte fórmula:
 */

#include <stdio.h>

// Function
double fToC(double f)
{
    // Local variable declaration
    double celcius;

    // Processing
    celcius = ((f - 32.0) / 9.0) * 5.0;

    return celcius;
}

// Main
int main()
{
    // Variable declaration
    double fahrenheit, celcius;

    // Data input
    printf("Give a Fahrenheit temperature:");
    scanf("%lf", &fahrenheit);

    // Processing
    celcius = fToC(fahrenheit);

    // Data Output
    printf("\nThe temperature in Fahrenheit is: %.2lf\n", fahrenheit);
    printf("The temperature in Celcius is: %.2lf\n", celcius);

}