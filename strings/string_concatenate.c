// Read two strings and concatenate them without using built - in function.

#include <stdio.h>

int main()
{

    char a[100], b[100];
    char result[200];
    scanf("%[^\n]s", a);
    scanf(" %[^\n]s", b);

    int pointer = 0;
    for (int i = 0; a[i] != '\0'; ++i)
    {
        result[pointer] = a[i];
        pointer += 1;
    }
    for (int i = 0; b[i] != '\0'; ++i)
    {
        result[pointer] = b[i];
        pointer += 1;
    }
    result[pointer] = '\0';

    printf("%s", result);
    return 0;
}