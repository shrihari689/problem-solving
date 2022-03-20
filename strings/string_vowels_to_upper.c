// Given a string, convert the vowels in the string into upper case characters.

#include <stdio.h>

char to_upper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch - 32;
    return ch;
}

int main()
{

    char a[1000];

    scanf("%[^\n]s", a);

    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            a[i] = to_upper(a[i]);
        i += 1;
    }

    printf("%s", a);

    return 0;
}