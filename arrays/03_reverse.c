// Write a program to recieve an array and print it in reverse order.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long int a[n];
    for (int i = 0; i < n; ++i)
        scanf("%ld", &a[i]);

    for (int i = (n - 1); i >= 0; --i)
    {
        printf("%ld ", a[i]);
    }
    return 0;
}