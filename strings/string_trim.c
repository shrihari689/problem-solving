// Trim leading white spaces from a string.

#include <stdio.h>

int main()
{

    char a[100], b[100];
    scanf("%[^\n]s", a);

    for (int i = 0, j = 0;; ++i)
    {
        if (a[i] != ' ')
        {
            b[j] = a[i];
            j += 1;
        }

        if (a[i] == '\0')
            break;
    }

    printf("%s", b);

    return 0;
}