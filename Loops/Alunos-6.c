/*
Elabore um algoritmo para calcular a média das notas referentes a uma prova realizada em uma sala com
10 alunos.
*/

#include <stdio.h>

int main()
{
    // Variable Declaration
    int counter = 1;
    float grade, sum = 0, average;

    // Data input
    while(counter <= 10)
    {
        printf("Give the %d note:", counter);
        scanf("%f", &grade);
        sum += grade;
        average = sum / counter;
        counter++;
    }
    // Output
    printf("Final average: %.1lf", average);

}
