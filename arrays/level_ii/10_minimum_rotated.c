// Write a program to find minimum element in a sorted and rotated array.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char is_increasing = 0;
    unsigned long int previous = 0;

    unsigned long int a[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%ld", &a[i]);
        if (previous > a[i])
        {
            printf("%d", a[i]);
        }
        previous = a[i];
    }
}