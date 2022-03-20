// Copy one string into another string without using in - built function.

#include <stdio.h>

int main()
{

    char a[1000], b[1000];

    scanf("%[^\n]s", a);

    int i = 0;
    while ((b[i] = a[i]) != '\0')
        i += 1;

    printf("%s\n", a);
    printf("%s", b);

    return 0;
}