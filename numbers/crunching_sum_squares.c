// Write a program to find the sum of squares of first 'N' odd numbers

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    long int sum = 0;
    while (n > 0)
    {
        sum += i * i;
        i += 2;
        n -= 1;
    }
    printf("%ld", sum);
    return 0;
}