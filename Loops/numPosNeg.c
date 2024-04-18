// Elabore um algoritmo para obter n valores do usuário e exibir a quantidade de valores negativos (menores que zero),
// a quantidade de valores positivos (maiores que zero) e a quantidade de valores iguais a zero.
// A quantidade n de valores deve ser informada pelo usuário.

#include <stdio.h>

int main()
{
    int valor,              // Armazena os valores
        zeros = 0,          // Conta a quantidade de zeros
        negativos = 0,      // Conta a quantidade de número negativos
        positivos = 0,      // Conta a quantidade números positivos
        quantidade,         // Define a quantidade de n número que serão requsitados
        contador;           // Variável contadora

    // Entrada de dados
    printf("Quantidade de valores: ");
    scanf("%d", &quantidade);

    for(contador = 1; contador <= quantidade; contador++)
    {
        // Entrada dos valores
        printf("De o %d valor: ", contador);
        scanf("%d", &valor);

        // Processamento
        if(valor < 0)
        {
            negativos++;
        }

        else if(valor == 0)
        {
            zeros++;
        }

        else
        {
            positivos++;
        }

    }

    // Saída de dados
    printf("\nNumeros negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);
    printf("Numeros positivos: %d", positivos);

    return 0;

}

