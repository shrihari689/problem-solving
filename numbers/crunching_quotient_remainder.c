// Given a 4 - digit number.Write a program to print the quotient and remainder when you divide the number by all its place value

#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);
    printf("%ld/%ld = %ld\n", n, 1, n / 1);
    printf("%ld%%%ld = %ld\n", n, 1, n % 1);

    printf("%ld/%ld = %ld\n", n, 10, n / 10);
    printf("%ld%%%ld = %ld\n", n, 10, n % 10);

    printf("%ld/%ld = %ld\n", n, 100, n / 100);
    printf("%ld%%%ld = %ld\n", n, 100, n % 100);

    printf("%ld/%ld = %ld\n", n, 1000, n / 1000);
    printf("%ld%%%ld = %ld\n", n, 1000, n % 1000);

    printf("%ld/%ld = %ld\n", n, 10000, n / 10000);
    printf("%ld%%%ld = %ld\n", n, 10000, n % 10000);

    return 0;
}