// Given a string containing 0's and 1's, find the total number of 0(1+)0 patterns in the string and output it.
// 0(1+)0 - There should be at least one '1' between the two 0's.

#include <stdio.h>

int main()
{

    char a[200];
    scanf("%[^\n]s", a);

    int is_start = 0, count = 0, one_count = 0;

    for (int i = 0; a[i] != '\0'; ++i)
    {

        if (a[i] == '0')
        {
            is_start = 1;
        }

        if (is_start && (one_count > 0) && (a[i] != '1'))
        {
            count += 1;
            one_count = 0;
        }
        if (is_start && (a[i] == '1'))
        {
            one_count += 1;
        }
    }

    printf("%d", count);

    return 0;
}