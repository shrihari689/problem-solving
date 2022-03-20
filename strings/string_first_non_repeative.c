// Find the first non - repeating character in a given string.

#include <stdio.h>

int main()
{
    char a[200];
    scanf("%[^\n]s", a);

    int memo[256];
    for (int i = 0; i < 256; ++i)
        memo[i] = 0;

    for (int i = 0; a[i] != '\0'; ++i)
    {
        int key = a[i];
        memo[key] += 1;
    }

    for (int i = 0; a[i] != '\0'; ++i)
    {
        int key = a[i];
        if (memo[key] == 1)
        {
            printf("The first non-repeating character is: %c", a[i]);
            return 0;
        }
    }

    printf("All the characters are repetitive");

    return 0;
}