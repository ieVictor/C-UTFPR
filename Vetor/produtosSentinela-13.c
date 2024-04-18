/*Faça um algoritmo para solicitar ao usuário o código alfanumérico e o preço de vários produtos, exibir o
código e o preço do produto com menor preço, calcular e exibir a média aritmética dos preços dos
produtos. O final da entrada de dados deve ser sinalizado por meio do código “0000” (dado sentinela).
 */

#include <stdio.h>
#include <string.h>

int main()
{
    // Variable Declaration
    char code[15][5];                   // Product alphacode
    int hCode, i = 0;                          // Highest product alphacode

    float price[15],                    // Product Price
    hPrice = 0,                         // Highest Price
    average = 0;                        // Average Prices

    // Data input
    do
    {
        printf("Give the (%d) code or (0000 to exit):", i + 1);
        scanf("%s", code[i]);

        if(strcmp(code[i], "0000") == 0) break;

        printf("Give the (%d) price:", i + 1);
        scanf("%f", &price[i]);

        printf("\n");

        // Processing
        average += price[i];

        if(price[i] > hPrice)
        {
            hPrice = price[i];
            hCode = i;
        }

        i++;
    }
    while(i <= 14);
    average /= i;

    // Data Output
    printf("Highest price p. code: %s\n", code[hCode]);
    printf("Highest product price: %.2f\n", hPrice);
    printf("Average product price: %.2f\n", average);

    return 0;
}