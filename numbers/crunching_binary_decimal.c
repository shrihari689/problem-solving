// Write a program to convert given binary number to equivalent decimal representation.

#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);

    long int decimal = 0;
    long int decimal_places = 1;

    while (n > 0)
    {
        int rem = n % 10;
        decimal += (rem * decimal_places);
        decimal_places *= 2;
        n /= 10;
    }

    printf("%ld", decimal);

    return 0;
}