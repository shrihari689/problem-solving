#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);

    int odd_count = 0, even_count = 0;

    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
            even_count += 1;
        else
            odd_count += 1;
        n /= 10;
    }

    printf("Odd count : %d\n", odd_count);
    printf("Even count : %d", even_count);

    return 0;
}