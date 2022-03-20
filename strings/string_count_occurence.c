// Read a string and a character. Find the first occurance of the given character in the string.

#include <stdio.h>

int main()
{
    char a[100], b;
    scanf("%[^\n]s", a);
    scanf(" %c", &b);

    int count = 0;

    for (int i = 0; a[i] != '\0'; ++i)
    {
        if (a[i] == b)
        {
            count = i + 1;
            break;
        }
    }

    if (count)
        printf("%d", count);
    else
        printf("-1");

    return 0;
}
