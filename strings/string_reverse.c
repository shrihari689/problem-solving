// Reverse the given string

#include <stdio.h>
#include <string.h>

int main()
{

    char a[100], b[100];

    scanf("%[^\n]s", a);

    int len = strlen(a);

    for (int i = 0;; ++i)
    {

        b[i] = a[len - i - 1];

        if (a[i] == '\0')
            break;
    }

    printf("%s", b);
    return 0;
}