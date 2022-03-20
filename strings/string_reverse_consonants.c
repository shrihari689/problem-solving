// Given a string, reverse only the consonants of the string.

#include <stdio.h>
#include <string.h>

int is_consonant(char ch)
{

    return (
        ch != 'A' &&
        ch != 'E' &&
        ch != 'I' &&
        ch != 'O' &&
        ch != 'U' &&
        ch != 'a' &&
        ch != 'e' &&
        ch != 'i' &&
        ch != 'o' &&
        ch != 'u');
}

int main()
{
    char a[100];
    char odd[100];
    scanf("%[^\n]s", a);

    int j = 0;
    for (int i = 0;; ++i)
    {
        if (is_consonant(a[i]))
        {
            odd[j] = a[i];
            j += 1;
        }

        if (a[i] == '\0')
        {
            odd[--j] = '\0';
            break;
        }
    }

    for (int i = 0; a[i] != '\0'; ++i)
    {
        if (is_consonant(a[i]))
        {
            a[i] = odd[--j];
        }
    }

    printf("%s", a);

    return 0;
}