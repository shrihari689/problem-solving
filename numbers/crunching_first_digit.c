// Given a 5-digit number. Write a program to print the first two-digit in a given number

#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);

    printf("%ld", n / 1000);

    return 0;
}