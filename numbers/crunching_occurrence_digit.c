// Write a program to count the occurrence of a particular digit in the number

#include <stdio.h>

int main()
{
    long int n;
    int k;
    scanf("%ld %d", &n, &k);

    int count = 0;

    while (n > 0)
    {
        int rem = n % 10;
        if (rem == k)
            count += 1;
        n /= 10;
    }

    printf("%d", count);

    return 0;
}