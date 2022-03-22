// Write a program to print the elements at even indexes of the given array.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%ld", &a[i]);
        if (i % 2 == 1)
            printf("%ld ", a[i]);
    }

    return 0;
}