// Write a program to find the sum of digits of a given number

#include <stdio.h>

int main()
{

    long int n;
    scanf("%ld", &n);

    long int sum = 0;

    while (n > 0)
    {
        int rem = n % 10;

        sum += rem;

        n /= 10;
    }

    printf("%ld", sum);

    return 0;
}