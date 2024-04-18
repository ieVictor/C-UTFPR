// Elabore um algoritmo para obter o tempo de duração de um evento expresso em segundos e mostrá-lo
// expresso em horas, minutos e segundos.

#include <stdio.h>

int main ()
{
    // Variables declaration
    int duracao, horas, minutos, segundos;
    int aux;

    // Data input
    printf("Tempo de duracao do evento em segundos:");
    scanf("%d", &duracao);

    // Processing
    horas = duracao / 3600;
    aux = duracao % 3600;
    minutos = aux / 60;
    segundos = aux % 60;

    // Output
    printf("%d segundos = %02d:%02d:%02d\n", duracao, horas, minutos, segundos);

    // %02d: Indica que serão impressos números dos dois digitos.

    return 0;
}

