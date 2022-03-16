// Write a program to check a given number is Armstrong or not .
// Note : An Armstrong number is a number whose sum of its own digits each raised to the power of the number of digits.
// Example : 1634 = 1 ^ 4 + 6 ^ 4 + 3 ^ 4 + 4 ^ 4

#include <stdio.h>

long int power(int n, int count)
{
    long int result = 1;
    for (int i = 0; i < count; ++i)
        result *= n;
    return result;
}

int count_digits(long int n)
{
    int count = 0;
    while (n > 0)
    {
        count += 1;
        n /= 10;
    }
    return count;
}
int is_armstrong(long int n)
{
    int count = count_digits(n);
    long int initial = n;
    long int result = 0;
    while (n > 0)
    {
        int rem = n % 10;
        result += power(rem, count);
        n /= 10;
    }
    return (initial == result);
}
int main()
{
    long int n;
    scanf("%ld", &n);
    if (is_armstrong(n))
        printf("ARMSTRONG");
    else
        printf("NOT ARMSTRONG");
    return 0;
}