// Write a program to print the most significant digit of a number.

#include <stdio.h>

long int count_places(long int n)
{
    long int result = 1;

    while (n > 0)
    {
        result *= 10;
        n /= 10;
    }

    return result;
}

int main()
{
    long int n;
    scanf("%ld", &n);

    long int count = count_places(n) / 10;

    int first_digit = n / count;

    printf("%d", first_digit);

    return 0;
}