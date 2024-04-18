/*  Escreva um algoritmo para armazenar uma lista de 10 nomes de pessoas e depois solicitar um novo nome
e verificar se este consta na lista. Apresentar uma mensagem se o novo nome estiver na lista e outra
mensagem caso contrário. */

#include <stdio.h>
#include <string.h>

int main()
{
    // Variable Declaration
    int flag;
    char matrice[10][16], nameVerify[16];

    // Data input
    for (int i = 0; i <= 10-1; ++i)
    {
        printf("Give the %d name:", i+1);
        scanf("%s", matrice[i]);
    }

    // Processing
    do
    {
        printf("Give a name to verify (x to exit):");
        scanf("%s", nameVerify);




    } while (1 != strcmp(nameVerify, "X"));
}


