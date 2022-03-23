// Write a program to accept an integer value and remove the last digit from a given number

#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);

    n = n / 10;

    printf("%ld", n);
    return 0;
}
