// Factorial loop

#include <stdio.h>

int main()
{
   int number, factorial = 1;

   // Data input
   printf("Number to be factored:");
   scanf("%d", &number);

   // Processing
   for(int counter = 1; counter <= number; counter++)
   {
        factorial *= counter;
   }

   // Data output
   printf("%d! = %d", number, factorial);

   return 0;
}

