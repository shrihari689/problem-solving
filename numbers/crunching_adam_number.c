// Write a program to generate adam numbers between the given range

#include <stdio.h>

long int reverse(long int n)
{
    long int result = 0;
    while (n > 0)
    {
        int rem = n % 10;
        result = result * 10 + rem;
        n /= 10;
    }
    return result;
}

int is_adam(long int n)
{
    long int squared = n * n;
    long int reversed = reverse(n);
    long int reversed_squared = reversed * reversed;
    long int reversed_squared_reversed = reverse(reversed_squared);
    return reversed_squared_reversed == squared;
}

int main()
{
    long int a, b;
    scanf("%ld %ld", &a, &b);

    for (long int i = a; i <= b; ++i)
        if (is_adam(i))
            printf("%d ", i);

    return 0;
}