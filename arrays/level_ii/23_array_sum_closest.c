// Given an array of both positive and negative integers , write a program to find the pairs whose sum is closest to zero.

// For example :
// The given array is : 4, 8, 10 , -12, -5, -2
// The output is : 4 -5
// Explantaion :
// Sum of 4 & -5 is -1 which is  closest to zero.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    int b[n][2];
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    int minimum_weight = INT_MAX;
    int minimum_a = 0;
    int minimum_b = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int weight = abs(a[i] + a[j]);
            if (weight < minimum_weight)
            {
                minimum_weight = weight;
                minimum_a = a[i];
                minimum_b = a[j];
            }
        }
    }

    int pos = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int weight = abs(a[i] + a[j]);
            if (weight == minimum_weight)
            {
                b[pos][0] = a[i];
                b[pos][1] = a[j];
                pos += 1;
            }
        }
    }

    for (int i = 0; i < pos; ++i)
    {
        printf("%d %d", b[i][0], b[i][1]);
        if (i != (pos - 1))
            printf("\n");
    }

    return 0;
}