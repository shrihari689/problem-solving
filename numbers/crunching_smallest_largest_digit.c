#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);

    unsigned char minimum = 10;
    unsigned char maximum = 0;

    while (n > 0)
    {
        int rem = n % 10;
        if (rem < minimum)
            minimum = rem;
        if (rem > maximum)
            maximum = rem;
        n /= 10;
    }

    printf("Largest digit is %d\n", maximum);
    printf("Smallest digit is %d", minimum);

    return 0;
}