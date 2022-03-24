// Write a program to find if the given year is a leap year or not.
// Note: A leap year is exactly divisible by 4 except for century years (years ending with 00).
// The century year is a leap year only if it is perfectly divisible by 400.

#include <stdio.h>

int is_leap(int year)
{
    if (year % 400 == 0)
        return 1;
    if (year % 100 == 0)
        return 0;
    if ((year % 4 == 0))
        return 1;

    return 0;
}

int main()
{

    int n;
    scanf("%d", &n);

    if (is_leap(n))
    {
        printf("Leap year");
    }
    else
    {
        printf("Not Leap year");
    }

    return 0;
}