// Given a number, write a program to find the largest number using the digits. If no such possible number then print -1.
// Example:
// 546
// 654

#include <stdio.h>

int crunch_digit_largest(long long int n)
{
    int memo[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    long int result = 0;

    while (n > 0)
    {
        int rem = n % 10;
        memo[rem] += 1;
        n /= 10;
    }
    for (int i = 9; i >= 0; --i)
        for (int j = 0; j < memo[i]; ++j)
            result = (result * 10) + (i);
    return result;
}

int main()
{

    long long int n;
    scanf("%ld", &n);

    long int result = crunch_digit_largest(n);

    if (result == n)
        printf("-1");
    else
        printf("%ld", result);
    return 0;
}