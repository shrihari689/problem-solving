// Swap adjacent characters in a given string. i.e., swap first and second characters, third and fourth characters, and so on.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[200];
    scanf("%[^\n]s", a);

    int len = strlen(a);

    if (len % 2 != 0)
        len -= 1;

    for (int i = 0; i < len - 1; i += 2)
    {
        char temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }

    printf("%s", a);

    return 0;
}