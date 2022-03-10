// Given two numbers, Write a program to check whether a second input is a circular number of first input

#include <stdio.h>
#include <string.h>

int checkCircular(char a[], char b[])
{
    int len = strlen(b);
    int start_pos = len - 1;
    while (a[0] != b[start_pos])
        --start_pos;
    for (int i = start_pos, j = 0; i < len; ++i, ++j)
    {
        if (a[j] != b[i])
            return 0;
    }
    for (int i = len - start_pos, j = 0; i < len; ++i, ++j)
    {
        if (a[i] != b[j])
            return 0;
    }

    return 1;
}

int main()
{
    char a[10], b[10];
    scanf("%s %s", a, b);
    if (checkCircular(a, b))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}