// Given a sentence, capitalize each word in the sentence.

#include <stdio.h>

char to_upper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch - 32;
    return ch;
}

int main()
{

    char a[200];
    scanf("%[^\n]s", a);

    int is_start = 1;

    for (int i = 0; a[i] != '\0'; ++i)
    {
        if (is_start)
            a[i] = to_upper(a[i]);

        if (a[i] == ' ')
            is_start = 1;
        else
            is_start = 0;
    }

    printf("%s", a);

    return 0;
}