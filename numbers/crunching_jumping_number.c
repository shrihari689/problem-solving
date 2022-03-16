// Write a program to generate all the jumping numbers less than or equal to given numberNote: A number is called as a Jumping Number if all adjacent digits in it differ by 1. The difference between '9' and '0' is not considered as 1.
// Example: 1234, 1012, 9898 are jumping numbers

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check_jumping(int n)
{
    if (n < 10)
        return n;
    int last_digit = n % 10;
    n /= 10;
    while (n > 0)
    {
        int rem = n % 10;
        if (abs(last_digit - rem) != 1)
            return -1;
        last_digit = rem;
        n /= 10;
    }

    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i)
        if (check_jumping(i) != -1)
            printf("%d ", i);
    return 0;
}