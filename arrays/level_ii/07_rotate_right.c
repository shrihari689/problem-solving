// Write a program to shift every element of an array to circularly right.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    unsigned long int a[n];
    for (int i = 0; i < n; ++i)
        scanf("%lu", &a[i]);

    int k;
    scanf("%d", &k);

    int count = k % n;

    for (int i = (n - count); i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    for (int i = 0; i < (n - count); ++i)
    {
        printf("%d ", a[i]);
    }
}