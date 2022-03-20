// Write a program to accept a number and print the first n odd numbers

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int end = 2 * n;
    for (int i = 1; i <= end; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}