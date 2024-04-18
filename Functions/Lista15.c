// Lista 15

#include <stdio.h>

// Função para verificar se o elemento pertence ao conjunto
int pertence(char elemento, char conj[], int tamanho)
{
    for (int i = 0; i <= tamanho-1; ++i)
    {
        if(elemento == conj[i])
        {
            return 1;
        }
    }
    return 0;
}

// Função para verificar se o conjunto está contido no outro conjunto
int estaContido(char conjA[], int tamanhoA, char conjB[], int tamanhoB)
{
    for (int i = 0; i <= tamanhoA-1; ++i)
    {
        if(!pertence(conjA[i], conjB, tamanhoB))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    // Declaração de variáveis
    int n1,     // Define o tamanho do conjunto a
        n2;     // Define o tamanho do conjunto b

    // Entrada de dados 1.
    printf("Tamanho do conjunto 1:");
    scanf("%d", &n1);

    printf("Tamanho do conjunto 2:");
    scanf("%d", &n2);

    // Declaração dos conjuntos
    char conjA[n1],         // Declaração do conjunto A
         conjB[n2];         // Declaração do conjunto B

    // Entrada de dados 2.
    printf("\n");

    for (int i = 0; i <= n1-1; ++i)
    {
        printf("Elemento A(%d):", i+1);
        scanf(" %c", &conjA[i]);
    }

    printf("\n");

    for (int i = 0; i <= n2-1; ++i)
    {
        printf("Elemento B(%d):", i+1);
        scanf(" %c", &conjB[i]);
    }

    // Processamento
    int resultado;          // Auxiliar para armazenar o resultado da verificação
    resultado = estaContido(conjA, n1, conjB, n2);

    // Saída de dados
    // Conjunto A
    printf("\nConjunto A:\n");
    for (int i = 0; i <= n1-1; ++i)
    {
        printf("%c ", conjA[i]);
    }


    // Está contido ou não
    if(resultado)
    {
        printf("\n\nEsta contido em\n");
    }
    else
    {
        printf("\n\nNao esta contido em\n");
    }

    // Conjunto B
    printf("\nConjunto B:\n");
    for (int i = 0; i <= n2-1; ++i)
    {
        printf("%c ", conjB[i]);
    }

}