// A A A A A
// B B B B B
// C C C C C
// D D D D D
// E E E E E

#include <stdio.h>

int main()
{

    int rows;
    scanf("%d", &rows);
    for (char i = 'A'; i < ('A' + rows); ++i)
    {
        for (int j = 0; j < rows; ++j)
            printf("%c ", i);

        printf("\n");
    }

    return 0;
}