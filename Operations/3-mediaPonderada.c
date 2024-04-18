// Faça um algoritmo para calcular a média ponderada de três notas de um aluno considerando os pesos 2,
// 3 e 5, respectivamente para a primeira, segunda e terceira nota.

#include <stdio.h>

int main () {
    // Variables declaration
    double nota1, nota2, nota3, peso1, peso2, peso3;
    double mediaP;

    // Data input
    printf("Primeira nota:");
    scanf("%lf", &nota1);
    printf("Segunda nota:");
    scanf("%lf", &nota2);
    printf("Terceira nota:");
    scanf("%lf", &nota3);

    // Processing
    peso1 = 2.0;
    peso2 = 3.0;
    peso3 = 5.0;
    mediaP = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    // Output
    printf("A media ponderada do aluno = %.2lf", mediaP);

    return 0;
}
