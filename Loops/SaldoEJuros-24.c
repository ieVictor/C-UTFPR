// Capital de Juros após decorridos n trimestre;

#include <stdio.h>
#include <math.h>

int main()
{
    // Variable declaration
    double amount, capital, interest, time, counter = 1;
    double income = 0, aux;

    // Data input
    printf("Initial capital:");
    scanf("%lf", &capital);

    printf("Interest taxes p/ trimester:");
    scanf("%lf", &interest);

    printf("Time Period in Years:");
    scanf("%lf", &time);

    // Procesing
    time *= 4; // Years to trimester

    printf("Trimester  |  Income  |  Balance\n");
    while(counter <= time)
    {
        amount = capital * pow((1 + interest), counter);
        income = amount - aux;
        aux = amount;

        // Data Output
        printf("%.0lf  |  R$ %.2lf  |  R$ %.2lf\n", counter, income, amount);
        counter++;
    }

    return 0;
}