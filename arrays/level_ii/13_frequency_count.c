// Write a program to count the frequency of element in the array

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
    {
        scanf("%d", &a[i]);
        memo[a[i]] += 1;
    }

    for (int i = 0; i < n; ++i)
    {
        if (memo[a[i]] != 0)
        {
            printf("%d:%d\n", a[i], memo[a[i]]);
            memo[a[i]] = 0;
        }
    }

    return 0;
}