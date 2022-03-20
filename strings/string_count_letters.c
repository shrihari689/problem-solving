// Count number of alphabets, digits and special characters in a string.

#include <stdio.h>

int main()
{
    int alphabets = 0, digits = 0, special_characters = 0;
    char a[1000];
    scanf("%[^\n]s", a);

    for (int i = 0; a[i] != '\0'; ++i)
    {
        switch (a[i])
        {
        case 'A' ... 'Z':
        case 'a' ... 'z':
            alphabets += 1;
            break;
        case '0' ... '9':
            digits += 1;
            break;
        default:
            special_characters += 1;
            break;
        }
    }

    printf("Count of alphabets: %d\n", alphabets);
    printf("Count of digits: %d\n", digits);
    printf("Count of special characters: %d", special_characters);

    return 0;
}