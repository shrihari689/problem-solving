// Write a program to print all the even numbers from 1 to n

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}