// Write a program to count the total number of duplicates in the array.

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    long int a[n];
    int count = 0;
    unsigned long int memo[100000];
    for (int i = 0; i < n; ++i)
    {
        scanf("%ld", &a[i]);
        if (memo[a[i]] != 1)
        {
            memo[a[i]] = 1;
        }
        else
        {
            count += 1;
        }
    }
    printf("%d", count);

    return 0;
}