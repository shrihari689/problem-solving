// Write a program to find the number of digits of a given number

#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);

    int count = 0;

    while (n > 0)
    {
        count += 1;
        n /= 10;
    }

    printf("%d", count);

    return 0;
}