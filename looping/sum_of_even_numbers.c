// Write a program to find sum of all even numbers between 1 to n

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = (n) * (n - 1);

    printf("%d", sum);

    return 0;
}