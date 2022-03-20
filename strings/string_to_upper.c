// Convert all characters of a string into upper case.

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
        a[i] = to_upper(a[i]);
        i += 1;
    }

    printf("%s", a);

    return 0;
}