// Write a program to print all the natural numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        printf("%d ", i);
    }
    return 0;
}