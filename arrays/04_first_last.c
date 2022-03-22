// Write a program to print the first and last element of an array.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long int a[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%ld", &a[i]);
    }
    printf("%ld %ld", a[0], a[n - 1]);

    return 0;
}