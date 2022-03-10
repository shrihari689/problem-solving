// Write a program to find the last two digits of Nth Fibonacci number
// Example
// 6th Fibonacci number is 987
// last two digit of 987 is 87

#include <stdio.h>

int getLastTwoDigits(int n)
{
    int last, second_last;
    last = n % 10;
    n /= 10;
    second_last = n % 10;
    return last + 10 * second_last;
}

int main()
{
    int n;
    scanf("%d", &n);
    long int arr[n + 1];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    int last_two_digits = getLastTwoDigits(arr[n]);
    printf("The last two digit of %dth fibonacci number is %d", last_two_digits);

    return 0;
}