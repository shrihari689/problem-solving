// Given a 4-digit number. Write a program to print the number of units, tens, hundreds, and thousands in a given number

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    printf("Number of units : %d\n", n);
    printf("Number of tens : %d\n", (n /= 10));
    printf("Number of hundreds : %d\n", (n /= 10));
    printf("Number of thousands : %d\n", (n /= 10));

    return 0;
}