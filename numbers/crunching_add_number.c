// Given two numbers in the different base, Write a program to add them and convert the result into the given base

#include <stdio.h>
#include <math.h>

int base_to_decimal(int n, int base)
{
    long int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int rem = n % 10;
        decimal += rem * pow(base, i);
        n /= 10;
        i += 1;
    }
    return decimal;
}

int main()
{
    int n1, n2;
    int b1, b2;
    int b;
    scanf("%d %d", &n1, &b1);
    scanf("%d %d", &n2, &b2);
    scanf("%d", &b);

    int c = base_to_decimal(n1, b1);
    int d = base_to_decimal(n2, b2);

    int sum = c + d;
    int result = 0;
    long int places = 1;
    while (sum > 0)
    {
        int rem = sum % b;
        result += (rem * places);
        sum /= b;
        places *= 10;
    }
    printf("%d", result);

    return 0;
}