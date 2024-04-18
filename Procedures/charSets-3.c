/*
Na teoria dos conjuntos, a união de dois conjuntos corresponde a todos os elementos dos dois conjuntos,
sem a ocorrência de elementos repetidos. Elabore um procedimento para realizar a união de um conjunto
a de n1 elementos com um conjunto b de n2 elementos para obter um conjunto c de n3 elementos. Os
elementos do conjunto são caracteres do alfabeto.
*/

#include <stdio.h>
#define MAX 100


char setUnion(char *a, char *b)
{
    // Local variable declaration
    int aSize = sizeof(a);
    int bSize = sizeof(b);
    char c[aSize + bSize];

    // Processing
    for (int i = 0; i < aSize; ++i)
    {
        for (int j = 0; j < bSize; ++j)
        {
            if(a[j] == b[i])
            {
                break;
            }
            c[j] = a[j];
        }
    }

    return *c;
}

int main()
{
    // Sets declaration
    char a[MAX], b[MAX], c[MAX];

    // Data input
    printf("Elements of A -\n");
    for(int i = 0; i < MAX; ++i)
    {
        printf("Enter the %d element (0 to exit):", i + 1);
        scanf(" %c", &a[i]);
        if(a[i] == '0')
        {
            break;
        }
    }

    printf("Elements of B -\n");
    for (int i = 0; i < MAX; ++i)
    {
        printf("Enter the %d element (0 to exit):", i + 1);
        scanf(" %c", &b[i]);
        if(b[i] == '0')
        {
            break;
        }
    }
    // Processing
    *c = setUnion(a, b);
    // Output
    printf("\nC -\n\n");
    for (int i = 0; i < sizeof(c); ++i)
    {
        printf("%c ", c[i]);
    }

}
