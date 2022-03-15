// Write a program to form the smallest number from the given number
// Note: Don't use arrays to solve a number problem
// Example:
// 991233612
// 12369

#include <stdio.h>

int check_digit_inside(long long int n, int digit)
{
    while (n > 0)
    {
        int rem = n % 10;
        if (rem == digit)
            return 1;
        n /= 10;
    }
    return 0;
}

int main()
{
    long int result = 0;
    long long int n;
    scanf("%ld", &n);

    for (int i = 1; i <= 9; ++i)
    {
        if (check_digit_inside(n, i))
        {
            result = result * 10 + i;
        }
    }

    printf("%ld", result);
    return 0;
}