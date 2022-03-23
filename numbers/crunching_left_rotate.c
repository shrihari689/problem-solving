// Write a program to perform one left rotation of a given number

#include <stdio.h>

long int
count_digits_place(long int n)
{
    long int count = 1;
    while (n > 0)
    {
        count *= 10;
        n /= 10;
    }
    return count;
}

int main()
{
    long int n;
    scanf("%ld", &n);

    long int count = count_digits_place(n) / 10;

    long int first_digit = n / count;
    long int remaining_part = n % count;

    printf("%ld", (remaining_part * 10) + first_digit);

    return 0;
}