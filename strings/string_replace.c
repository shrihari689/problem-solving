// Replace all occurances of a character with another character.

#include <stdio.h>

int main()
{

    char a[100], b[100];
    char source, destination;
    scanf("%[^\n]s", a);
    scanf(" %c %c", &source, &destination);

    for (int i = 0;; ++i)
    {
        if (a[i] == source)
            b[i] = destination;
        else
            b[i] = a[i];

        if (a[i] == '\0')
            break;
    }

    printf("%s", b);

    return 0;
}