// S Calculation Minus Plus;

#include <stdio.h>
#include <math.h>

int main()
{
    // Variable Declaration
    double s = 0 , numerator = 1, denominator = 1;

    // Processing
    while(numerator <= 10 && denominator <= 100)
    {
        s += numerator/pow(denominator, 2);
        numerator++;
        denominator++;
        s -= numerator/ pow(denominator, 2);
        numerator++;
        denominator++;
    }

    // Data output
    printf("S = %.2lf", s);

    return 0;
}