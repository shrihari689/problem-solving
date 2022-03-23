// Write a program to check a given number is harshad number or not.

#include <stdio.h>

int main()
{

    long int n;
    scanf("%ld", &n);
    long int initial = n;
    int sum = 0;

    while (n > 0)
    {
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }

    if ((initial % sum) == 0)
        printf("HARSHAD NUMBER");
    else
        printf("NOT HARSHAD NUMBER");

    return 0;
}