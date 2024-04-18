/*Elabore um algoritmo para ler o nome e o sexo de 10 pessoas, mostrar o nome da pessoa precedido de
Sr. ou Sra. (de acordo com o sexo) e apresentar no final a quantidade de pessoas do sexo masculino e a
quantidade de pessoas do sexo feminino.
*/

#include <stdio.h>

int main()
{
    // Variable Declaration
    char name[10][20],
         gender[10];

    int male = 0,
        female = 0;

    // Data input
    for(int i = 0; i <= 9; i++)
    {
        printf("Person %d\n", i+1);

        printf("Name:");
        scanf("%s", name[i]);

        printf("Gender (M/F):");
        scanf(" %c", &gender[i]);

        // Processing
        if(gender[i] == 'M')
        {
            male++;
        }

        else if (gender[i] == 'F')
        {
            female++;
        }

        else
        {
            while(gender[i] != 'M' || gender[i] != 'F')
            {
                printf("Incorrect gender, try again:");
                scanf("%c", &gender[i]);
            }
        }
        printf("\n");
    }

    // Data Output
    for(int j = 0; j <= 9; j++)
    {
        if(gender[j] == 'M')
        {
            printf("Sr. %s\n", name[j]);
        }

        else
        {
            printf("Sra. %s\n", name[j]);
        }
    }

    printf("Males: %d\n", male);
    printf("Females: %d\n", female);
    return 0;
}