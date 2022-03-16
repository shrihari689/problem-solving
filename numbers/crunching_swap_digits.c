// Write a program to swap the alternate digits in a given number

#include <stdio.h>

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

int main()
{
    long int n;
    scanf("%d", &n);
    int count = count_digits(n);

    long int result = 0;
    int places = 1;

    // Check for Odd Digit Count and remove the last digit
    if (count % 2)
    {
        result = n % 10;
        n /= 10;
        places *= 10;
    }

    while (n > 0)
    {
        int first = n % 10;
        n /= 10;
        int second = n % 10;
        n /= 10;

        result += places * second;
        places *= 10;
        result += places * first;
        places *= 10;
    }

    printf("%ld", result);

    return 0;
}