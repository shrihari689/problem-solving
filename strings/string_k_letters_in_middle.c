// Given a string str and an integer K. The task is to find the middle K characters of the given string and print them.
// Note that len(str) – K is always even. If len(str) – K is odd, then you cannot locate K middle characters, in such cases print the character " * " K-times.

#include <stdio.h>
#include <string.h>

int main()
{

    char a[200];
    int n;
    scanf("%[^\n]s", a);
    scanf("%d", &n);

    int len = strlen(a);
    int limit = len - n;

    if (limit % 2 == 0)
    {
        int start = limit / 2;
        int end = start + n;
        for (int i = start; i < end; ++i)
            printf("%c", a[i]);
    }
    else
    {
        for (int i = 0; i < n; ++i)
            printf("*");
    }

    return 0;
}