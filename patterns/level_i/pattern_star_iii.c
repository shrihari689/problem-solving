// *******
//  *****
//   ***
//    *
//   ***
//  *****
// *******

#include <stdio.h>

int main()
{
    int rows;
    scanf("%d", &rows);

    for (int i = 0, j = 2 * rows - 1; i < rows; ++i, j -= 2)
    {
        for (int k = 0; k < i; ++k)
            printf(" ");
        for (int k = 0; k < j; ++k)
            printf("*");
        printf("\n");
    }

    for (int i = 1, j = 3; i < rows; ++i, j += 2)
    {
        for (int k = 0; k < (rows - i - 1); ++k)
            printf(" ");
        for (int k = 0; k < j; ++k)
            printf("*");
        printf("\n");
    }

    return 0;
}