// Write a program to find the average of numbers in a given range and print the average with two precision point

#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    float average = (a + b) / 2;

    printf("%.2f", average);
    return 0;
}