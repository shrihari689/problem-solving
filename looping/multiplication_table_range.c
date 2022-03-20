// Write a program to generate the multiplication table with the given integer upto the given range.

#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= k; ++i)
        printf("%d X %d = %d\n", i, n, i * n);
    return 0;
}