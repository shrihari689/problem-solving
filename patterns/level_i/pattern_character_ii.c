// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E

#include <stdio.h>

int main()
{

    int rows;
    scanf("%d", &rows);
    char limit = 'A' + rows;
    for (char i = 'A'; i < limit; ++i)
    {
        for (int j = 'A'; j < limit; ++j)
            printf("%c ", j);

        printf("\n");
    }

    return 0;
}