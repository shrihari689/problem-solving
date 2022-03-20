// Given a sentence, find the length of the longest and the shortest word in it.

#include <stdio.h>
#include <limits.h>

int main()
{
    char a[100];
    scanf("%[^\n]s", a);

    int count = 0;
    int minimum = INT_MAX;
    int maximum = INT_MIN;

    for (int i = 0;; ++i)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            if (count > maximum)
                maximum = count;

            if (count < minimum)
                minimum = count;
            count = 0;
        }
        else
        {
            count += 1;
        }

        if (a[i] == '\0')
            break;
    }

    printf("Length of the longest word = %d\n", maximum);
    printf("Length of the shortest word = %d", minimum);

    return 0;
}