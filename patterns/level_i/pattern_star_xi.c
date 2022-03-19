//    *
//   **
//  ***
// ****
//  ***
//   **
//    *

#include <stdio.h>

int main()
{
    int rows;
    scanf("%d", &rows);

    for (int i = 0; i < rows; ++i)
    {
        for (int k = 0; k < (rows - i - 1); ++k)
            printf(" ");
        for (int j = 0; j <= i; ++j)
            printf("*");

        printf("\n");
    }

    for (int i = 0; i < rows - 1; ++i)
    {
        for (int k = 0; k <= i; ++k)
            printf(" ");
        for (int j = 0; j < (rows - i - 1); ++j)
            printf("*");

        printf("\n");
    }

    return 0;
}