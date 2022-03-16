// Write a program to convert octal to a decimal value

#include <stdio.h>
#include <math.h>

int main()
{
    long int n;
    scanf("%ld", &n);
    long int result = 0;
    int places = 0;
    while (n > 0)
    {
        int rem = n % 10;
        result += pow(8, places) * rem;
        places += 1;
        n /= 10;
    }
    printf("%ld", result);

    return 0;
}