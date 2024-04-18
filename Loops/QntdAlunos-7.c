/*
 Elabore um algoritmo para calcular a média das notas de uma prova realizada pelos alunos de uma turma.
O número de alunos existentes na turma deve ser informado pelo usuário.

Aluno: Victor Gabriel \ 1ADS \ NOTURNO
*/

#include <stdio.h>

int main()
{
    // Variable Declaration
    int counter = 1, students;
    float grade, sum = 0, average;

    // Data input
    printf("Number of students:");
    scanf("%d", &students);

    while(counter <= students)
    {
        printf("Give the %d note:", counter);
        scanf("%f", &grade);
        sum += grade;
        average = sum / students;
        counter++;
    }

    // Output
    printf("Final average: %.1lf", average);

}
