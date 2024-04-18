#include <stdio.h>

#define MAX 1000

// Function to get the length of the string
int strLength(const char *str)
{
    // Variable Declaration
    int length = 0;

    // Processing
    while (str[length] != '\0')
    {
        length++;
    }

    // Output
    return length;
}

// Function to replace strings
char *strreplace(char *str, const char *find, const char *replace)
{
    // Variable Declaration
    int len1 = strLength(str);
    int len2 = strLength(find);
    int len3 = strLength(replace);

    // Processing
    for (int i = 0; i < len1; i++)
    {
        int match = 1;
        for (int j = 0; j < len2; j++)
        {
            if (str[i + j] != find[j])
            {
                match = 0;
                break;
            }
        }

        if (match == 1)
        {
            if (len2 != len3)
            {
                if (len2 < len3)
                {
                    for (int j = len1 + len3 - len2; j >= i + len2; j--)
                    {
                        str[j] = str[j - len3 + len2];
                    }
                }
                else
                {
                    for (int j = i + len2; j <= len1 - len2 + len3; j++)
                    {
                        str[j] = str[j + len2 - len3];
                    }
                }
            }

            for (int j = 0; j < len3; j++, i++)
            {
                str[i] = replace[j];
            }

            i--;

            // Adjust the length of the string after replacement
            len1 += len3 - len2;
        }
    }

    // Add null-terminating character at the end of the modified string
    str[len1] = '\0';

    // Output
    return str;
}

// Main Function
int main()
{
    // Variable Declaration
    char str1[MAX];
    char str2[MAX];
    char str3[MAX];

    printf("Enter a text: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the section that will be changed: ");
    fgets(str2, sizeof(str2), stdin);

    printf("Enter the new sequence: ");
    fgets(str3, sizeof(str3), stdin);

    // Removes the '\n'
    int len1 = strLength(str1);
    if (str1[len1 - 1] == '\n')
    {
        str1[len1 - 1] = '\0';
    }

    int len2 = strLength(str2);
    if (str2[len2 - 1] == '\n')
    {
        str2[len2 - 1] = '\0';
    }

    int len3 = strLength(str3);
    if (str3[len3 - 1] == '\n')
    {
        str3[len3 - 1] = '\0';
    }


    // Procesing
    strreplace(str1, str2, str3);

    // Data output
    printf("\nResult:\n");
    printf("%s\n", str1);

    return 0;
}
