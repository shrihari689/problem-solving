// Write a program to count the integers in a range which have even number of odd digits and an odd number of even digits. Inclusive of range.

// Explanation
// 101 - 2 ✅ odd digits | 1 ✅ even digits
// 124 - 1 ❌ odd digits | 2 ❌ even digits

#include <stdio.h>
#define TRUE 1;
#define FALSE 0;

int check_odd_even_digits(int n)
{
    int odd_digits = 0, even_digits = 0;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
            even_digits += 1;
        else
            odd_digits += 1;
        n /= 10;
    }
    if (odd_digits % 2 != 0)
        return FALSE;
    if (even_digits % 2 == 0)
        return FALSE;
    return TRUE;
}

int main()
{
    int count = 0;
    int start, end;
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; ++i)
        if (check_odd_even_digits(i))
            count += 1;
    printf("%d", count);
    return 0;
}