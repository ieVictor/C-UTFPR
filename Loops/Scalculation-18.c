// Calculate the value of S

#include <stdio.h>

int main()
{
    // Variable declaration
    float s = 0, numerator = 1.0, denominator = 1.0;

    // Processing
    while(numerator <= 99.0 && denominator <= 50.0)
    {
       s += numerator/denominator;
       numerator += 2;
       denominator++;
    }

    // Data output
    printf("S = %.1lf\n", s);

    return 0;
}
