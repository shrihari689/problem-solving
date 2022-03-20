// Given a string str and a character ch, replace spaces of the string with the character ch.

#include <stdio.h>

int main()
{

    char a[100], b[100];
    char ch;
    scanf("%[^\n]s", a);
    scanf(" %c", &ch);

    for (int i = 0;; ++i)
    {
        if (a[i] == ' ')
            b[i] = ch;
        else
            b[i] = a[i];

        if (a[i] == '\0')
            break;
    }

    printf("%s", b);

    return 0;
}