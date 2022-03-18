// Write a program to check whether a given number is increasing or decreasing or bouncy number
// Note: A bouncy number is any non-negative integer that is neither increasing nor decreasing

#include <stdio.h>
#include <limits.h>

int is_decreasing(int n)
{
    int last_digit = INT_MIN;
    while (n > 0)
    {
        int rem = n % 10;
        if (last_digit > rem)
            return 0;
        n /= 10;
        last_digit = rem;
    }
    return 1;
}

int is_increasing(int n)
{
    int last_digit = INT_MAX;
    while (n > 0)
    {
        int rem = n % 10;
        if (last_digit < rem)
            return 0;
        n /= 10;
        last_digit = rem;
    }
    return 1;
}

int main()
{
    long int n;
    scanf("%ld", &n);

    if (is_increasing(n))
        printf("Increasing Number");
    else if (is_decreasing(n))
        printf("Decreasing Number");
    else
        printf("Bouncy Number");

    return 0;
}