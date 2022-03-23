// Write a program to find the count of digits of a number which perfectly divides the given number
// Example: 124
//         4 perfectly divides 124
//         2 perfectly divides 124
//         1 perfectly divides 124
// so, the output is 3

#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);
    long int initial = n;

    int count = 0;

    while (n > 0)
    {
        int digit = n % 10;
        if ((digit != 0) && (initial % digit) == 0)
            count += 1;
        n /= 10;
    }

    printf("%d", count);

    return 0;
}