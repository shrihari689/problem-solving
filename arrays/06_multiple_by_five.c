// Write a program to multiply the given array elements by 5 and print it.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long int a[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%ld", &a[i]);
        printf("%ld ", a[i] * 5);
    }

    return 0;
}