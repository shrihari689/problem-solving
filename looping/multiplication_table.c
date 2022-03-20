// Write a program to generate the multiplication table with the given integer upto 10.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; ++i)
        printf("%d X %d = %d\n", i, n, i * n);
    return 0;
}