// Given a sentence, print each word on a separate line.

#include <stdio.h>

int main()
{

    char a[300];
    scanf("%[^\n]s", a);

    for (int i = 0; a[i] != '\0'; ++i)
    {
        if (a[i] == ' ')
            printf("\n");
        else
            printf("%c", a[i]);
    }

    return 0;
}