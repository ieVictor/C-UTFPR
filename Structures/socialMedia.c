// Exercício 3 - Redes sociais

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structs ------------------------
struct user
{
    char cpf[30];
    char name[30];
    char email[30];
    char socialMedia[10][30];
    char access[10][30];
    int socialCounter;
};

// Register Functions -------------
struct user userRegister(void)
{
    struct user users;

    printf("CPF:");
    scanf("%s", users.cpf);
    getchar();

    printf("Name:");
    fgets(users.name, sizeof(users.name), stdin);

    printf("E-mail:");
    fgets(users.email, sizeof(users.email), stdin);

    users.socialCounter = 0;

    printf("\nSuccess!\n\n");

    return users;
}

void socialmediaAdd(struct user *users, int counter)
{
    if(counter == 0)
    {
        printf("Register a user first!!\n\n");
        return;
    }

    char cpf[30];
    int i;

    printf("User CPF:");
    scanf("%s", cpf);
    getchar();

    for(i = 0; i < counter; ++i)
    {
        if(strcmp(cpf, users[i].cpf) == 0)
        {
            char socialMedia[30];
            printf("Enter the social media name:");
            fgets(socialMedia, sizeof(socialMedia), stdin);
            socialMedia[strcspn(socialMedia, "\n")] = '\0';

            char access[30];
            printf("Enter the acess:");
            fgets(access, sizeof(access), stdin);
            access[strcspn(access, "\n")] = '\0';

            strcpy(users[i].access[users[i].socialCounter], access);
            strcpy(users[i].socialMedia[users[i].socialCounter], socialMedia);

            users[i].socialCounter++;
            printf("\nSocial media added successfully!\n\n");
            return;
        }
    }


    printf("User not found!\n\n");
}

// List functions -----------------
void usersSocialList(struct user *users, int counter)
{
    int i;

    if(counter == 0)
    {
        printf("No users registered yet!\n\n");
        return;
    }

    for (i = 0; i < counter; ++i)
    {
        printf("\nUser - %s", users[i].name);
        for (int j = 0; j < users[i].socialCounter; ++j)
        {
            printf("%s - %s\n", users[i].socialMedia[j], users[i].access[j]);
        }
    }

    printf("\n");
}

void socialmediaList(struct user *users, int counter)
{
    int i, j, k;

    if(counter == 0)
    {
        printf("No users registered yet!\n\n");
        return;
    }

    char socialMedia[10][30] = {
            "Whatsapp", "Youtube", "Instagram", "Facebook", "TikTok",
            "Linkedin", "Messenger", "Kwai", "Pinterest", "Twitter"
    };

    for(i = 0; i < 10; ++i)
    {
        printf("%s -\n", socialMedia[i]);

        printf("Users associated:\n");
        for(j = 0; j < counter; ++j)
        {
            for(k = 0; k < users[j].socialCounter; ++k)
            {
                if(strcmp(users[j].socialMedia[k], socialMedia[i]) == 0)
                {
                    printf("\n- CPF: %s\n", users[j].cpf);
                    printf("- Name: %s", users[j].name);
                    break;
                }
            }
        }

        printf("\n");
    }
}

// Menu ---------------------------
void menu()
{
    printf("- Menu -\n");

    printf("[1] - New Register\n");
    printf("[2] - Register Social Media User\n");
    printf("[3] - List Users & Social Medias\n");
    printf("[4] - List Social Medias\n");
    printf("[0] - Exit\n");
    printf("\n");
}

// Main Programm ------------------
int main ()
{
    // Variable declaration
    int decision, counter = 0;
    struct user *users = NULL;

    // Menu
    do
    {
        menu();
        scanf("%d", &decision);
        getchar();

        switch (decision)
        {
            // Register a new user.
            case 1:
                printf("\nUser Register -\n");
                struct user newUser = userRegister();

                counter++;
                users = realloc(users, counter * sizeof(struct user));
                users[counter - 1] = newUser;
                break;

            // Register a new social media to a user;
            case 2:
                printf("\nUser social media register -\n");
                socialmediaAdd(users, counter);
                break;

            // List Users & Social Medias
            case 3:
                printf("\nUsers & Social Medias -\n");
                usersSocialList(users, counter);
                break;

            case 4:
                printf("Listing Social networks:\n");
                socialmediaList(users, counter);
                break;

            case 0:
                printf("\nGoodbye!\n");
                break;

            default:
                printf("\nOption not found!\n\n");
                break;
        }
    }
    while(decision != 0);
}
