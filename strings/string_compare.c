// Read two strings and check whether they are equal.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%[^\n]s", a);
    scanf(" %[^\n]s", b);

    int a_len = strlen(a);
    int b_len = strlen(b);

    if (a_len != b_len)
    {
        printf("Not Equal");
    }
    else
    {
        for (int i = 0; a[i] != '\0'; ++i)
        {
            if (a[i] != b[i])
            {
                printf("Not Equal");
                return 0;
            }
        }
        printf("Equal");
    }

    return 0;
}