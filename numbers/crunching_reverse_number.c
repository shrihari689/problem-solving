// Write a program to reverse a given number

#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);
    long int reversed = 0;

    while (n > 0)
    {
        int rem = n % 10;
        reversed = reversed * 10 + rem;
        n /= 10;
    }

    printf("%ld", reversed);

    return 0;
}