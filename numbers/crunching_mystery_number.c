// Write a program to check whether a given number is Mystery Number or notNote: A mystery number is that number which can be expressed as a sum of two numbers and those two numbers should be reverse of each other.
// Example: 121 is a mystery number
// 121 => 29 + 92 = 121

#include <stdio.h>

int main()
{
    long int n;
    scanf("%d", &n);
    if (n % 11 == 0)
        printf("Mystery Number");
    else
        printf("Not Mystery Number");
    return 0;
}