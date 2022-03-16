// Write a program to generate the Armstrong numbers between a given range

#include <stdio.h>

long int power(int n, int count)
{
    long int result = 1;
    for (int i = 0; i < count; ++i)
        result *= n;
    return result;
}

int count_digits(long int n)
{
    int count = 0;
    while (n > 0)
    {
        count += 1;
        n /= 10;
    }
    return count;
}
int is_armstrong(long int n)
{
    int count = count_digits(n);
    long int initial = n;
    long int result = 0;
    while (n > 0)
    {
        int rem = n % 10;
        result += power(rem, count);
        n /= 10;
    }
    return (initial == result);
}
int main()
{
    long int start, end;
    scanf("%ld %ld", &start, &end);
    for (; start <= end; ++start)
        if (is_armstrong(start))
            printf("%ld ", start);
    return 0;
}