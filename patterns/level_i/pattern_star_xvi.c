// *******
// *     *
// *     *
// *     *
// *     *
// *     *
// *******

#include <stdio.h>

int main()
{

    int rows;
    scanf("%d", &rows);

    rows = 2 * rows - 1;

    for (int i = 0; i < rows; ++i)
    {
        if (i == 0 || i == (rows - 1))
        {
            for (int j = 0; j < rows; ++j)
                printf("*");
        }
        else
        {
            printf("*");
            printf("%*c", rows - 1, '*');
        }
        printf("\n");
    }

    return 0;
}