// Write a program to count number of bits set to 1 in an Integer.

#include <stdio.h>

int main()
{
    
    long int n;
    scanf("%ld", &n);

    int count = 0;

    while (n > 0)
    {
        count += n & 1;
        n = n >> 1;
    }

    printf("%d", count);

    return 0;
}