// Faça um algoritmo para calcular a quantidade de latas de tinta necessária para pintar um tanque cilíndrico
// de combustível e o custo do material para o serviço de pintura. A altura e o raio do tanque são fornecidos
//pelo usuário. O preço da lata de tinta também é fornecido pelo usuário. Considere que cada lata contém
// 5 litros de tinta e que cada litro de tinta pinta 3 metros quadrados da área do tanque.

#include <stdio.h>
#include <math.h>

int main ()
{
    // Variables declaration
    int LpLata, cPintura; // LpLata = Litros por lata, cPintura = Capacidade de pintura
    double altura, raio, Alateral, Abase;
    double Atotal, precoT, qTinta, custo; // precoT = Preço da tinta

    // Data input
    printf("Altura do tanque:");
    scanf("%lf", &altura);

    printf("Raio do tanque:");
    scanf("%lf", &raio);

    printf("Preco da tinta:");
    scanf("%lf", &precoT);

    // Processing
    LpLata = 5; // 5 litros de tinta.
    cPintura = 3; // 3 metros quadrados.

    Alateral = 2 * M_PI * raio * altura;
    Abase = M_PI * pow(raio, 2);
    Atotal = Alateral + 2 * Abase;

    qTinta = Atotal/cPintura/LpLata;
    custo = qTinta*precoT;

    // Output
    printf("Para um tanque de %.2lf metros de altura e %.2lf metros de raio, considerando o preco de R$%.2lf:\n", altura, raio, custo);
    printf("Sao necessarias %.2lf latas de tinta e o custo e de R$ %.2lf", qTinta, custo);

    return 0;
}


