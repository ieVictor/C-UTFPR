/*
Elabore duas funções, uma para calcular a área de um círculo e a outra para calcular o perímetro de um
círculo. Elabore um algoritmo para solicitar ao usuário o raio (r) de um círculo e a opção para calcular a
área ou o perímetro.
 */

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Fuction Area
double area(double r)
{
    // Local variable declaration
    double a;

    // Processing
    a = PI * pow(r, 2);

    // Output
    return a;

}

// Fuction Perimeter
double perimeter(double r)
{
    // Local variable declaration
    double p;

    // Processing
    p = 2 * PI * r;

    // Output
    return p;
}

// Main
int main()
{
    // Variable declaration
    double radius, calculation;
    char selection;

    // Data input
    printf("Give the radius:");
    scanf("%lf", &radius);

    printf("\nSelect the option:\n");
    printf("Perimeter (P)\n");
    printf("Area (A)\n");
    scanf(" %c", &selection);

    // Processing
    if(selection == 'P')
    {
        calculation = perimeter(radius);
    }
    else
    {
        calculation = area(radius);
    }

    // Data output
    printf("\n- Result -\n");

    if(selection == 'P')
    {
        printf("Perimeter: %.1lf cm", calculation);
    }
    else
    {
        printf("Area: %.1lf cm", calculation);
    }

    return 0;

}