// Write a program to check the number is Automorphic number or not.

#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);

    long int square = n * n;

    int last_digit = n % 10;
    int square_last_digit = square % 10;

    if (last_digit == square_last_digit)
        printf("AUTOMORPHIC");
    else
        printf("NOT AUTOMORPHIC");

    return 0;
}