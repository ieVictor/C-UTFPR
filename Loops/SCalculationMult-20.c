// S Calculation X * X+1, decrementation incrementation;

#include <stdio.h>

int main()
{
    // Variable declaration
    double s = 0.0, numerator = 37.0, denominator = 1.0;

    // Data input
    while(numerator >= 1.0 && denominator <= 37.0)
    {
        s += numerator * (numerator + 1)/denominator;

        numerator--;
        denominator++;
    }

    // Data Output
    printf("%.2lf", s);

    return 0;
}

