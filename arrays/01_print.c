// Write a program to accept an array of elements and print it.

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }

    return 0;
}