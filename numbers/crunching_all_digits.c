// Write a program to print all the digits of a given number in reverse order

#include <stdio.h>

int main()
{

    long int n;
    scanf("%ld", &n);

    while (n > 0)
    {
        int rem = n % 10;

        printf("%d ", rem);

        n /= 10;
    }

    return 0;
}