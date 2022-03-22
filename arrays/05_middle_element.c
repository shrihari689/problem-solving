// Write a program to accept an array and print the middle element.

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

    int mid = (n / 2) - !(n % 2);

    printf("%ld", a[mid]);

    return 0;
}