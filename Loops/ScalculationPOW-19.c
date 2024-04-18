// S Calculation POW and Decrementation

#include <stdio.h>
#include <math.h>

int main()
{
    // Variable declaration
    double s = 0.0, numerator = 2.0, denominator = 50.0, potency = 1.0;

    // Processing
    while(potency <= 50.0 && denominator >= 1.0)
    {
        s += pow(numerator, potency) / denominator;
        potency++;
        denominator--;
    }

    // Data Output
    printf("S = %.2lf", s);

    return 0;

}