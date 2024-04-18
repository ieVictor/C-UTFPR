// Faça um algoritmo para calcular a quantidade de galões cheios de 5 litros de combustível necessária para
// uma viagem em um automóvel que faz 12 Km/l; o tempo gasto e a velocidade média na viagem são
// informados pelo usuário.

#include <stdio.h>

int main ()
{
    // Variable Declarations
    int galao, qGaloes, kml, tempo;
    double velMedia; // Var. for Km/h

    // Data input
    printf("Tempo gasto na viagem em horas: ");
    scanf("%d", &tempo);
    printf("Velocidade media: ");
    scanf("%lf", &velMedia);

    // Processing
    kml = 12;
    galao = 5;
    qGaloes = tempo * velMedia/kml/galao; // Aux. Variable

    // Output
    printf("Para uma viagem de %d horas na velocidade de %.1lf Km/h, sao necessarios %d galoes cheios", tempo, velMedia, qGaloes);

    return 0;
}
