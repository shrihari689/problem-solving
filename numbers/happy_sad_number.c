// Write a program to check whether a given number is a happy number or sad numberNote: If the number is said to be happy, then replace every digit with the sum of squares of its digits, and repeat the process until the number becomes 1
// Example: 82 is a happy number
// 82 = 8^2 + 2^2 = 68
// 68 = 6^2 + 8^2 = 100
// 100 = 1^2 + 0^2 + 0^2 = 1

#include <stdio.h>

long int make_it_happy(long int n)
{
    if (n == 1)
        return 1;
    // Happy Numbers makes an infinite loop when it reaches 4 or 5
    // Reference: https://oeis.org/A007770
    if (n == 4 || n == 5)
        return 0;
    long int result = 0;
    while (n > 0)
    {
        int rem = n % 10;
        result += rem * rem;
        n /= 10;
    }
    return make_it_happy(result);
}

int main()
{
    long int n;
    scanf("%ld", &n);
    if (make_it_happy(n))
        printf("Happy Number");
    else
        printf("Sad Number");
    return 0;
}