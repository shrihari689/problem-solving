// Given a binary string which consists of only 0's and 1's. Convert the string into its equivalent Decimal number.

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    char a[32];
    long int n = 0;
    scanf("%s", a);

    int len = strlen(a);

    for (int i = len - 1, j = 0; i >= 0; --i, ++j)
    {
        int rem = a[i] - '0';
        if (rem)
        {
            n += pow(2, j);
        }
    }

    printf("%ld", n);

    return 0;
}