// Write a program to find two numbers that occur odd number of times in an array.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int memo[1001];
    for (int i = 0; i < 1001; ++i)
        memo[i] = 0;

    int a[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        memo[a[i]] += 0;
    }

    for (int i = 0; i < n; ++i)
    {
        if (memo[a[i]] % 2 != 0)
        {
            printf("%d ", a[i]);
            memo[a[i]] = 0;
        }
    }

    return 0;
}