// Write a program to arrange the odd digits and even digits in a given number

#include <stdio.h>

int main()
{
    long int n;
    int is_odd_first;
    scanf("%ld %d", &n, &is_odd_first);

    int odd = 0, even = 0;
    int odd_places = 1, even_places = 1;
    while (n > 0)
    {
        int rem = n % 10;

        if (rem % 2 == 0)
        {
            even += even_places * rem;
            even_places *= 10;
        }
        else
        {
            odd += odd_places * rem;
            odd_places *= 10;
        }

        n /= 10;
    }

    if (is_odd_first)
        printf("%d", odd * even_places + even);
    else
        printf("%d", even * odd_places + odd);

    return 0;
}