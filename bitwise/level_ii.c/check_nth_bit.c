// Write a program to Check if nth Bit in a 32-bit Integer is set or not.

#include <stdio.h>

int main()
{
    long int n;
    int k;
    scanf("%ld %d", &n, &k);

    int is_valid = (n >> k) & 1;

    if (is_valid)
        printf("Yes");
    else
        printf("-1");

    return 0;
}