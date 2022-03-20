// Get a string and toggle case each character of the string. Toggle case means convert lower case characters into upper case characters and vice - versa.

#include <stdio.h>

char toggle_case(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch - 32;
    else if (ch >= 'A' && ch <= 'Z')
        return ch + 32;
    else
        return ch;
}

int main()
{
    char a[1000];
    scanf("%[^\n]s", a);

    for (int i = 0; a[i] != '\0'; ++i)
        a[i] = toggle_case(a[i]);

    printf("%s", a);
    return 0;
}