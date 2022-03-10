// Write a program to accept three integers a,b & k. Find 'a' raised to power 'b' and print its kth digit

#include <stdio.h>
#include <math.h>

int getLastNthDigit(long int a, int n)
{
    int digit;
    for (int i = 0; i < n; ++i)
    {
        digit = a % 10;
        a /= 10;
    }

    return digit;
}

int main()
{
    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);
    long int expo = pow(a, b);
    int digit = getLastNthDigit(expo, k);
    printf("%ld", digit);
    return 0;
}