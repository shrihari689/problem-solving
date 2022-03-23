// Write a program to print the unit digit in a given number

#include <stdio.h>

int main()
{
    int n;
    scanf("%ld", &n);

    printf("%d", n % 10);

    return 0;
}