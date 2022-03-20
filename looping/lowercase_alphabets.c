// Write a program to generate Lowercase alphabets from a given range.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i <= 122; ++i)
        printf("%c ", i);

    return 0;
}