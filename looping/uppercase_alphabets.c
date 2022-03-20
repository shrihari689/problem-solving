// Write a program to generate uppercase alphabets from a given range.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i <= 90; ++i)
        printf("%c ", i);

    return 0;
}