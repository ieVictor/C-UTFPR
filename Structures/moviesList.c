/*
Elabore um algoritmo para armazenar as seguintes características relacionadas a filmes: código, título, ano
de lançamento, gênero cinematográfico, produtora, direção, duração e país de origem. Esse algoritmo
deve permitir o seguinte:
a) Listar o conjunto de registros de filmes.
b) Criar um registro de filme.
c) Editar um registro de filme existente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct Declaration
struct movies
{
    char code[4];
    char title[35];
    int year;
    char gender[35];
    char producer[35];
    char director[35];
    char duration[35];
    char country[35];
};

// Function to display the list
void listDisplay(struct movies movie)
{
    printf("Code: %s\n", movie.code);
    printf("Title: %s", movie.title);
    printf("Year: %d\n", movie.year);
    printf("Gender: %s", movie.gender);
    printf("Producer: %s", movie.producer);
    printf("Director: %s", movie.director);
    printf("Duration: %s", movie.duration);
    printf("Country: %s", movie.country);
}

// Fuction to edit a movie
struct movies editMovie(struct movies movie)
{
    int decision;
    do
    {
        printf("\nWhich information you want to edit?\n\n");

        printf("[1] Code: %s\n", movie.code);
        printf("[2] Title: %s", movie.title);
        printf("[3] Year: %d\n", movie.year);
        printf("[4] Gender: %s", movie.gender);
        printf("[5] Producer: %s", movie.producer);
        printf("[6] Director: %s", movie.director);
        printf("[7] Duration: %s", movie.duration);
        printf("[8] Country: %s", movie.country);
        printf("[0] Exit\n\n");

        printf("Decision:");
        scanf("%d", &decision);
        getchar();

        switch(decision)
        {
            case 1:
                printf("Enter the new code:");
                fgets(movie.code, sizeof(movie.code), stdin);
                getchar();
                break;

            case 2:
                printf("Enter the new title:");
                fgets(movie.title, sizeof(movie.title), stdin);
                break;

            case 3:
                printf("Enter the new Year:");
                scanf("%d", &movie.year);
                getchar();
                break;

            case 4:
                printf("Enter the new gender:");
                fgets(movie.gender, sizeof(movie.gender), stdin);
                break;

            case 5:
                printf("Enter the new Producer:");
                fgets(movie.producer, sizeof(movie.producer), stdin);
                break;

            case 6:
                printf("Enter the new director:");
                fgets(movie.director, sizeof(movie.director), stdin);
                break;

            case 7:
                printf("Enter the new duration:");
                fgets(movie.duration, sizeof(movie.duration), stdin);
                getchar();
                break;

            case 8:
                printf("Enter the new country:");
                fgets(movie.country, sizeof(movie.country), stdin);
                break;
        }
    }
    while(decision != 0);

    printf("\n");
    return movie;
}

// Register a new movie
struct movies newMovie(void)
{
    struct movies movie;

    printf("Enter the code:");
    fgets(movie.code, sizeof(movie.code), stdin);
    getchar();

    printf("Enter the title:");
    fgets(movie.title, sizeof(movie.title), stdin);

    printf("Enter the year:");
    scanf("%d", &movie.year);
    getchar();

    printf("Enter the gender:");
    fgets(movie.gender, sizeof(movie.gender), stdin);

    printf("Enter the producer:");
    fgets(movie.producer, sizeof(movie.producer), stdin);

    printf("Enter the director:");
    fgets(movie.director, sizeof(movie.director), stdin);

    printf("Enter the duration:");
    fgets(movie.duration, sizeof(movie.duration), stdin);

    printf("Enter the country:");
    fgets(movie.country, sizeof(movie.country), stdin);

    printf("\n");

    return movie;
}

// Main Function
int main()
{
    // Variable Declaration
    int decision;  // User Decision
    int count = 0;      //  How many movies

    struct movies *movie = NULL;

    // Data input
    do
    {
        // User Decision
        printf("What do you want to do?\n");
        printf("[1] - List the existent movies\n");
        printf("[2] - Create a new movie\n");
        printf("[3] - Edit a movie\n");
        printf("[0] - Exit\n");

        printf("\nDecision:");
        scanf("%d", &decision);
        getchar();

        // List existent movies
        if(decision == 1)
        {
            printf("\n");

            if(count == 0)
            {
                printf("There's no movies in the list\n\n");
            }
            else
            {
                for(int i = 0; i < count; i++)
                {
                    listDisplay(movie[i]);
                    printf("\n");
                }
            }
        }

        // Create a new movie
        if(decision == 2)
        {
            printf("\n");
            struct movies newFilm = newMovie();

            count++;
            movie = realloc(movie, count * sizeof(struct movies));
            movie[count - 1] = newFilm;
        }

        // Edit a movie
        if(decision == 3)
        {
            char code[4];
            printf("\n");

            printf("Which movie do you want to edit?\n\n");

            // List the name & code off all movies
            for(int i = 0; i < count; i++)
            {
                printf("Name: %s", movie[i].title);
                printf("Code: %s\n\n", movie[i].code);
            }

            printf("\nEnter the code:");
            fgets(code, sizeof(code), stdin);

            // Remove the newline character from code
            size_t code_length = strlen(code);
            if(code[code_length - 1] == '\n')
            {
                code[code_length - 1] = '0';
            }


            // Test the code
            for (int i = 0; i < count; ++i)
            {
                if(strcmp(code, movie[i].code) == 0)
                {
                    movie[i] = editMovie(movie[i]);
                }
            }
        }
    }
    while(decision != 0);

    if(decision == 0)
    {
        printf("\nGoodbye!\n");
    }

    free(movie);
}