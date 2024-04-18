/* Escreva um algoritmo para obter um conjunto de 10 elementos (números inteiros positivos) e depois
solicitar um novo elemento (número inteiro positivo) e verificar se este pertence ao conjunto. Apresentar
uma mensagem se o novo elemento pertence ao conjunto e outra mensagem caso contrário. */

#include <stdio.h>

int main()
{
    // Variable Declaration
    int num[10], newNum[4];
    int i, j = 0, position, flag;

    // Data input
    for(i = 0; i <= 10 - 1; i++)
    {
        printf("%d. Give a number:", i + 1);
        scanf("%d", &num[i]);
        printf("\n");
    }

    // Data input newNum
    do
    {
        printf("Give a number to test:");
        scanf("%d", &newNum[j]);

        // Processing
        i = 0;
        flag = 0;
        position = 0;
        do
        {
            if(num[i] == newNum[j])
            {
                position = i+1;
                flag = 1;
            }
            i++;
        }
        while(i < 10 && !flag);

        // Data output
        if(flag)
        {
            printf("Yes, the element %d belongs to the array, pos: %d\n\n", newNum[j], position);
        }
        else
        {
            printf("No, the element %d not belongs to the array!\n\n", newNum[j]);
        }

        j++;
    }
    while(j <= 4-1);
    return 0;
}