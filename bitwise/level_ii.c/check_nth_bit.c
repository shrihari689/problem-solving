// Write a program to Check if nth Bit in a 32-bit Integer is set or not.

#include <stdio.h>

int main()
{
    long int n;
    int k;
    scanf("%ld %d", &n, &k);

    long int binary = 0;
    long int binary_places = 1;

    while (n > 0)
    {
        int rem = n % 2;
        binary += rem * binary_places;
        binary_places *= 10;
        n /= 2;
    }

    int is_valid = 0;

    int i = 0;

    while (binary > 0)
    {
        int bit = binary % 10;
        if (i == k)
        {
            is_valid = bit;
            break;
        }
        i += 1;
        binary /= 10;
    }

    if (is_valid)
        printf("Yes");
    else
        printf("No");

    return 0;
}