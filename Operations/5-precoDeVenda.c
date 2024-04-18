// Elabore um algoritmo para calcular o preço de venda de um carro que é formado pelo preço da
// montadora, mais 15% de lucro, mais 11% de IPI, mais 17% de ICMS; as porcentagens são aplicadas sobre
// o preço da montadora; apresente o preço de venda, o valor do lucro e o valor de cada um dos impostos
// (IPI e ICMS).

#include <stdio.h>

int main ()
{
    // Variables Declaration
    double lucro, ipi, icms,pVenda, pMontadora;

    // Data input
    printf("Preco da montadora:");
    scanf("%lf", &pMontadora);

    // Processing
    lucro = pMontadora * (15.0/100.0);
    ipi = pMontadora * (11.0/100.0);
    icms = pMontadora * (17.0/100.0);
    pVenda = pMontadora + lucro + ipi + icms;

    // Output
    printf("Venda: %.2lf\n", pVenda);
    printf("Lucro: %.2lf\n", lucro);
    printf("IPI: %.2lf\n", ipi);
    printf("ICMS: %.2lf\n", icms);

    return 0;

}

