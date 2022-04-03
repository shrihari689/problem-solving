// Write a program to check if all the bits of a given integer is set (1).

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    while (n > 0)
    {
        int bit = n & 1;
        if (!bit)
        {
            printf("-1");
            return 0;
        }
        n = n >> 1;
    }

    printf("1");

    return 0;
}