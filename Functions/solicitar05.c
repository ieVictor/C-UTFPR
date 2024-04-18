/*
Escreva uma função para solicitar um caractere digitado pelo usuário e retornar este caractere somente
se for igual a “S” ou “N”. Caso contrário (se o caractere não for “S” ou “N”), a função deve exibir a
mensagem “Entrada incorreta!” e solicitar um caractere novamente. Use essa função em um algoritmo
para obter um número do usuário, exibir este número ao cubo e perguntar ao usuário se deseja continuar
ou não. O algoritmo somente deve ser concluído quando o usuário responder “N”.
 */

#include <stdio.h>

// Fuction
char test()
{
    char condition;

    do
    {
        printf("Continue? (Y or N):");
        scanf(" %c", &condition);

        if(condition != 'Y' && condition != 'N')
        {
            printf("Wrong input!\n");
        }
    }
    while(condition != 'Y' && condition != 'N');
}


// Main
int main()
{
    // Variable declaration
    int number, calculation;

    // Loop
    do {
        // Data Input
        printf("Give a number:");
        scanf("%d", &number);

        // Processing
        calculation = number * number * number;

        // Data output
        printf("%d cube: %d\n", number, calculation);

        // Question
        test();
    }
    while(test() != 0);
}