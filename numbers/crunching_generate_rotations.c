// Write a program to perform one right rotation of a given number

#include <stdio.h>

long int count_digits_place(long int n)
{
    long int count = 1;
    while (n > 0)
    {
        count *= 10;
        n /= 10;
    }
    return count;
}

long int rotate_digits(long int n, long int count)
{
    long int result = 0;

    long int last_digit = n % 10;
    long int remaining_part = n / 10;

    result = last_digit * (count) + (remaining_part);

    return result;
}

int main()
{
    long int n;
    scanf("%ld", &n);

    long int count = count_digits_place(n) / 10;

    long int rotated = rotate_digits(n, count);
    while (rotated != n)
    {
        printf("%ld\n", rotated);
        rotated = rotate_digits(rotated, count);
    }

    return 0;
}