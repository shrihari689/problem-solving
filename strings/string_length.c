// Find the length of the given string without using in - built function.

#include <stdio.h>

int main()
{
    char line[1000];

    scanf("%[^\n]s", line);

    int i = 0;
    while (line[i] != '\0')
        i += 1;

    printf("%d", i);

    return 0;
}