//    *
//   * *
//  *   *
// * * * *

#include <stdio.h>

int main()
{

    int rows;
    scanf("%d", &rows);

    printf("%*c\n", rows, '*');

    for (int i = rows - 2, j = 1; i > 0; --i, j += 2)
    {
        for (int k = 0; k < i; ++k)
            printf(" ");

        printf("*");

        for (int k = 0; k < j; ++k)
            printf(" ");

        printf("*");

        printf("\n");
    }

    for (int i = 0; i < rows; ++i)
        printf("* ");

    return 0;
}