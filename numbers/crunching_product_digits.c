// Write a program to find the product of digits of a number

#include <stdio.h>

int main()
{

    long int n;
    scanf("%ld", &n);

    long int product = 1;

    while (n > 0)
    {
        int rem = n % 10;

        product *= rem;

        n /= 10;
    }

    printf("%ld", product);

    return 0;
}