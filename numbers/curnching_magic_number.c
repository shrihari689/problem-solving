// Write a program to check if a number is a magic number or not
// Note : find the sum of digits repeatedly until single - digit occurs.If the final sum is 1, then it is called magic number
// Example:
// 406 => 4+0+6 = 10 => 1+0 = 1

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
    if (result == 1)
    {
        printf("Magic Number");
    }
    else
    {
        printf("Not Magic Number");
    }
    return 0;
}