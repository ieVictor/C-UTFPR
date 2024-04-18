// 6. Elabore um algoritmo para obter do usuário a velocidade em quilômetros por hora (km/h) e informar a
// mesma velocidade em metros por segundo (m/s).

#include <stdio.h>

int main ()
{
    // Variables declaration
    double vKm, vMs;

    // Data input
    printf("Velocidade em Km/h:");
    scanf("%lf", &vKm);

    // Processing
    vMs = vKm/ 3.6;

    // Output
    printf("%.1lf Km/h = %.1lf m/s", vKm,vMs);

}
