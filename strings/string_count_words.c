// Count number of words in a string.

#include <stdio.h>
int main()
{

    char a[100];
    scanf("%[^\n]s", a);
    int spaces = 0;
    for (int i = 0; a[i] != '\0'; ++i)
    {
        if (a[i] == ' ')
            spaces += 1;
    }

    printf("%d", spaces + 1);

    return 0;
}