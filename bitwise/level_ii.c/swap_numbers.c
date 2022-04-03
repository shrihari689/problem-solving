// Write a program to swap two Integers using Bitwise Operators, Without using Temporary Variable.

#include <stdio.h>

int main()
{

    long int a, b;
    scanf("%ld %ld", &a, &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("%ld %ld", a, b);

    return 0;
}