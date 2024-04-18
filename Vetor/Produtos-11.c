/*
Elabore um algoritmo para solicitar ao usuário o código alfanumérico e o preço de 15 produtos, exibir o
código e o preço do produto com maior preço, calcular e exibir a média aritmética dos preços dos
produtos.
 */

#include <stdio.h>

int main()
{
    // Variable Declaration
    char code[15][5];                   // Product alphacode
    int hCode;                          // Highest product alphacode

    float price[15],                    // Product Price
          hPrice = 0,                   // Highest Price
          average = 0;                  // Average Prices

    // Data input
    for(int i = 0; i <= 14; i++)
    {
        printf("Give the (%d) code:", i+1);
        scanf("%s", code[i]);

        printf("Give the (%d) price:", i+1);
        scanf("%f", &price[i]);

        printf("\n");

        // Processing
        average += price[i];

        if(price[i] > hPrice)
        {
            hPrice = price[i];
            hCode = i;
        }
    }

    average /= 15;
    // Data Output
    printf("Highest price p. code: %s\n", code[hCode]);
    printf("Highest product price: %.2f\n", hPrice);
    printf("Average product price: %.2f\n", average);

    return 0;
}