/******************************************************************************

Uma empresa precisa calcular o valor do bônus a ser pago aos seus funcionários.
Elabore um algoritmo para calcular e apresentar o bônus a partir do salário informado.
O valor do bônus depende do tipo do cargo (A ou B) e da faixa de salário de acordo com a seguinte tabela:

*******************************************************************************/
#include <stdio.h>

int main()
{
    // Variable Declaration
    char    salaryCategory;       // Salary category, A or B
    float   salary,                // Salary variable
    bonus;                  // Bonus variable

    // Data input
    printf("Digite o seu salário:");
    scanf("%f", &salary);          // Get the salary value

    printf("Qual a categoria do seu Salário: Tipo (A) ou Tipo (B)?\n");
    scanf("%s", &salaryCategory); // Get the salary category

    //Processing
    if (salaryCategory == 'A' || salaryCategory == 'a')  // A type category
    {
        if(salary <= 1000.00)
        {
            bonus = 500.00;
            //Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salary, salaryCategory, bonus);
        }

        else if (salary > 1000.01 && salary <= 2500.00)
        {
            bonus = 250.00;
            // Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salary, salaryCategory, bonus);
        }

        else if (salary > 2500.00 && salary <= 5000.00)
        {
            bonus = 100.00;
            // Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salary, salaryCategory, bonus);
        }

        else
        {
            bonus = 50.00;
            // Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salary, salaryCategory, bonus);
        }

    } else if( salaryCategory == 'B' || salaryCategory == 'b') // B type category
    {
        if (salary <= 2000.00)
        {
            bonus = 500.00;
            //Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salary, salaryCategory, bonus);
        }

        else if (salary > 2000.01 && salary <= 5000.00)
        {
            bonus = 200.00;
            //Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salary, salaryCategory, bonus);
        }

        else
        {
            bonus = 100.00;
            //Output
            printf("Para salário igual a %.2f e tipo de cargo igual a (%c), o valor do bônus é %.2f", salary, salaryCategory, bonus);
        }
    }

    else // if the chosen value is different from A or B
    {
        printf("Categoria inválida, favor verificar \n");
        return 1;
    }

    return 0;
}

