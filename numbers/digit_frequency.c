// Write a program to print the frequency of digits in a given number

#include <stdio.h>

int main()
{
    unsigned long int n;
    scanf("%lu", &n);
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (n > 0)
    {
        int rem = n % 10;
        arr[rem] += 1;
        n = n / 10;
    }
    for (int i = 0; i < 10; ++i)
    {
        printf("Frequency of %d = %d\n", i, arr[i]);
    }

    return 0;
}