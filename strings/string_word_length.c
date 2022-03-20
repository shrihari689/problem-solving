// Given a sentence. Find the length of each word in the sentence.

#include <stdio.h>

int main()
{

    char a[1000];

    scanf("%[^\n]s", a);

    int count = 0;

    for (int i = 0;; ++i)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            printf("%d ", count);
            count = 0;
        }
        else
        {
            count += 1;
        }

        if (a[i] == '\0')
            break;
    }

    return 0;
}