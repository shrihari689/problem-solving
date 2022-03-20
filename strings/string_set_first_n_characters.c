// Given a string str, an integer N and a character ch, set the first N characters to the given character ch.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[200], k, b[200];
    int n;
    scanf("%[^\n]s", a);
    scanf("%d %c", &n, &k);

    int len = strlen(a);

    for (int i = 0; i < n; ++i)
        b[i] = k;

    for (int i = n;; ++i)
    {
        b[i] = a[i];
        if (a[i] == '\0')
            break;
    }

    printf("%s", b);
    return 0;
}