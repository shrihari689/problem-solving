// Write a program to find the sum of digits of a given number and check whether the sum is palindrome or not

#include <stdio.h>

long int reverse_digit(long int n)
{
    long int reversed = 0;

    while (n > 0)
    {
        int rem = n % 10;
        reversed = (reversed * 10) + rem;
        n /= 10;
    }

    return reversed;
}

long int sum_of_digits(long int n)
{
    long int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return sum;
}

int main()
{
    long int n;
    scanf("%ld", &n);

    long int sum = sum_of_digits(n);

    if (sum == reverse_digit(sum))
        printf("PALINDROME");
    else
        printf("NOT PALINDROME");

    return 0;
}