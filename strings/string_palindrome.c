// Check whether a string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main()
{

    char a[100];
    scanf("%[^\n]s", a);

    int len = strlen(a);
    int mid = len / 2;

    int is_palindrome = 1;

    for (int i = 0; i < mid; ++i)
    {
        if (a[i] != a[len - i - 1])
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
        printf("Yes");
    else
        printf("No");

    return 0;
}