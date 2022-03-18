// Write a program to check whether a number is Disarium number or notNote: A number is called Disarium if the sum of its digits powered with their respective positions is equal to the number itself.
// Example: 135 is a disarium number
// 135 => 1^1 + 3^2 + 5^3 = 135

#include <stdio.h>
#include <math.h>

int count_digits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += 1;
        n /= 10;
    }
    return count;
}

int is_disarium(int n, int count)
{
    int initial = n;
    int result = 0;

    while (n > 0)
    {
        int rem = n % 10;
        result += pow(rem, count--);
        n /= 10;
    }
    return initial == result;
}

int main()
{
    long int n;
    scanf("%d", &n);

    int count = count_digits(n);

    if (is_disarium(n, count))
        printf("Disarium Number");
    else
        printf("Not Disarium Number");

    return 0;
}