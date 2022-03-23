// Write a program to convert given decimal number to equivalent binary representation.

#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);

    long int binary = 0;
    long int binary_places = 1;

    while (n > 0)
    {
        int rem = n % 2;
        binary += rem * binary_places;
        binary_places *= 10;
        n /= 2;
    }

    printf("%ld", binary);

    return 0;
}