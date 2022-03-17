// Write a program to check if a given number is Mersenne prime or not
// Note: Mersenne Number is a prime number which is one less than a power of 2
// Example: 17 is a Mersenne prime
// 2^(4)-1 = 17

#include <stdio.h>
#include <math.h>

int main()
{

    long int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Not Mersenne Prime");
        return 0;
    }

    for (int i = 0; i < 33; ++i)
    {
        long int power = pow(2, i);
        if ((power - 1) == n)
        {
            printf("Mersenne Prime");
            return 0;
        }
    }
    printf("Not Mersenne Prime");

    return 0;
}