/* Um palíndromo é uma palavra ou frase que pode ser lida no seu sentido normal, da esquerda para a
direita, bem como no sentido contrário, da direita para a esquerda, sem que haja mudança nas palavras
que a formam e no seu significado. Elabore uma função para verificar se uma palavra ou frase é
palíndromo. Essa função deve receber como parâmetro um ponteiro para string e deve retornar 1, se a
string contém um palíndromo, caso contrário deve retornar 0.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>


int palindromo(char *str1)
{
    int size = strlen(str1);
    int i, j;
    char newString[size + 1];

    // Processing (remove spaces)
    int indice = 0;
    for(i = 0; i < size; i++)
    {
        if(str1[i] != ' ')
        {
            newString[indice] = tolower(str1[i]);
            indice++;
        }
    }
    newString[indice] = '\0';

    // Processing (Testing equalty)
    int start = 0;
    int end = strlen(newString) - 1;

    while(start < end)
    {
        if(newString[start] != newString[end])
        {
            return 0;
        }
        start++;
        end--;
    }

}

int main()
{
    // Variable declaration
    char str1[30]; // String 1
    int result;

    // Data input
    printf("1 - String:");
    fgets(str1, sizeof(str1), stdin);

    // Remover a nova linha no final da string (se existir)
    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }

    // Data output
    if(palindromo(str1))
    {
        printf("Eh um palindromo\n");
    }
    else
    {
        printf("Nao eh um palindromo\n");
    }

    return 0;
}