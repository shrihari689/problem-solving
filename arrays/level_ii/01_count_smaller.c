// Given an array arr[] of size N, the task is to count the number of array elements such that all the elements to its left are strictly smaller than it.
// Note: The first element of the array will be considered to be always satisfying the condition.

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];

    int count = 0;

    int last_maximum = -1;

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        if (a[i] > last_maximum)
        {
            count += 1;
            last_maximum = a[i];
        }
    }

    printf("%d", count);

    return 0;
}