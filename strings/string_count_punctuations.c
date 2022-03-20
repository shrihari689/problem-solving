// Given a string, count the number of punctuation characters in the string.
// Consider , . / ' ? !

#include <stdio.h>

int is_punctuation(char ch)
{
    return (
        (ch == ',') ||
        (ch == '.') ||
        (ch == '\'') ||
        (ch == '!') ||
        (ch == '/') ||
        (ch == '?'));
}

int main()
{
    char a[1000];
    scanf("%[^\n]s", a);

    int count = 0;

    for (int i = 0; a[i] != '\0'; ++i)
    {
        if (is_punctuation(a[i]))
            count += 1;
    }

    printf("Number of punctuation characters = %d", count);

    return 0;
}