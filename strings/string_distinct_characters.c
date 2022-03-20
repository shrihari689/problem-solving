// Given a string, print only the distinct characters from the string.

#include <stdio.h>

int main()
{

    char a[300];
    scanf("%[^\n]s", a);

    int memo[300];

    for (int i = 0; a[i] != '\0'; ++i)
    {
        int key = a[i];
        if (memo[key] != -1)
        {
            printf("%c", a[i]);
            memo[key] = -1;
        }
    }

    return 0;
}