// Write a program to find the number occurring odd number of times in an array.
// All numbers occur even number of times except one number which occurs odd number of times.
// Find the number in O(n) time & constant space.

#include <stdio.h>

#define MAX_SIZE 1000

int main()
{

    int n;
    scanf("%d", &n);

    unsigned long int memo[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; ++i)
        memo[i] = 0;

    int a[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        if (memo[a[i]] == 0)
        {
            sum += a[i];
            memo[a[i]] = 1;
        }
        else
        {
            sum -= a[i];
            memo[a[i]] = 0;
        }
    }

    printf("%d", sum);
}