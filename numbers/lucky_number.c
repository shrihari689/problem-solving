// Write a program to check a given number is Lucky number or not
// Note: If all digits in a given number are different, then it is called lucky number

#include <stdio.h>

int checkUnique(int n)
{
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (n > 0)
    {
        int rem = n % 10;
        if (arr[rem] == 0)
            arr[rem] = 1;
        else
            return 0;
        n /= 10;
    }
    return 1;
}

int main()
{
    long int n;
    scanf("%d", &n);
    if (checkUnique(n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}