// Write a program to find the sum of digits of a number repeatedly until a single digit occurs
// Example
// 1647 => 1 + 6 + 4 + 7 = 18 => 1 + 8 = 9

#include <stdio.h>

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return sum;
}

int crunchSumOfDigits(int n)
{
    if (n < 10)
        return n;
    return crunchSumOfDigits(sumOfDigits(n));
}

int main()
{
    int n;
    scanf("%d", &n);
    int result = crunchSumOfDigits(n);
    printf("%d", result);
    return 0;
}