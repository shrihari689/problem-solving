// Write a program to find the average of the given array elements.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long int a[n];
    long int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%ld", &a[i]);
        sum += a[i];
    }
    printf("%ld", sum / n);
    return 0;
}