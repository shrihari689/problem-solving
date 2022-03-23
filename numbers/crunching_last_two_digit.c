// Write a program to accept an integer value and print its last two digit

#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);

    printf("%ld", n % 100);

    return 0;
}