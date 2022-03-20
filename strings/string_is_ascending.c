// Given a string, determine if the characters in the string are presented in ascending order or not.

#include <stdio.h>

int main()
{
    char a[1000];
    scanf("%[^\n]s", a);

    int is_valid = 1;
    char last_character = '\0';

    for (int i = 0; a[i] != '\0'; ++i)
    {
        if (last_character <= a[i])
        {
            last_character = a[i];
        }
        else
        {
            is_valid = 0;
            break;
        }
    }

    if (is_valid)
        printf("Yes");
    else
        printf("No");

    return 0;
}