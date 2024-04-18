/* Elabore uma função para copiar uma sequência de n caracteres a partir de uma posição de uma string.
 * Elabore também um programa que utilize essa função. O protótipo dessa função deve ser o seguinte:
 * char *strcopyn(char *str1, char *str2, int n, int pos);
 * A função strcopyn() copia n caracteres a partir da posição pos da string str2 para a string str1.
 * A função retorna o ponteiro para str1.
*/

#include <stdio.h>

// Function to get the lenght of the string
int strlength(char *str)
{
    // Variable declaration
    int length = 0;

    // Processing
    while (str[length] != '\0')
    {
        length++;
    }

    // Data output
    return length;
}

// Function to copy
char *strcopyn(char *str1, char *str2, int n, int pos)
{
    // Variable declaration
    int length1 = strlength(str1);
    int length2 = strlength(str2);

    // Processing
    if (pos >= length2) {
        return str1;
    }

    int i, count = 0;
    for (i = pos; i < length2 && count < n; i++) {
        if (str2[i] != ' ') {
            str1[length1 + count] = str2[i];
            count++;
        }
    }

    str1[length1 + count] = '\0';

    // Data output
    return str1;
}

int main()
{
    // Variable declaration
    char str1[100];
    char str2[100];
    int n, pos;

    // Data input
    printf("Type a string:");
    fgets(str1, sizeof(str1), stdin);
    str1[strlength(str1) - 1] = '\0';  // Remove \n

    printf("Type another string:");
    fgets(str2, sizeof(str2), stdin);

    printf("Type the number of characters you want to copy:");
    scanf("%d", &n);

    printf("Type the initial position:");
    scanf("%d", &pos);

    // Function call (Processing)
    strcopyn(str1, str2, n, pos);

    // Data output
    printf("Copied string: %s", str1);

    return 0;
}
