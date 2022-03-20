// Given a string, reverse only the alphanumeric ( alphabets and numbers) in the string.

#include <stdio.h>
#include <string.h>

int is_alplanumeric(char ch)
{
    switch (ch)
    {
    case 'a' ... 'z':
    case 'A' ... 'Z':
    case '0' ... '9':
        return 1;
    }

    return 0;
}

int main()
{
    char a[100];
    char odd[100];
    scanf("%[^\n]s", a);

    int j = 0;
    for (int i = 0;; ++i)
    {
        if (is_alplanumeric(a[i]))
        {
            odd[j] = a[i];
            j += 1;
        }

        if (a[i] == '\0')
        {
            odd[j] = '\0';
            break;
        }
    }

    for (int i = 0; a[i] != '\0'; ++i)
    {
        if (is_alplanumeric(a[i]))
        {
            a[i] = odd[--j];
        }
    }

    printf("%s", a);

    return 0;
}