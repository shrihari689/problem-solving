// Write a program to convert the binary to octal

#include <stdio.h>
#include <math.h>

int main()
{
    long int binary;
    scanf("%ld", &binary);

    long int decimal = 0;

    int places = 0;
    while (binary > 0)
    {
        int rem = binary % 10;
        decimal += pow(2, places) * rem;
        places += 1;
        binary /= 10;
    }

    printf("%o", decimal);

    return 0;
}