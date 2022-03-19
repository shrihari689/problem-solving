// *     *
//  *   *
//   * *
//    *
//   * *
//  *   *
// *     *

#include <stdio.h>

int main()
{
    int rows;
    scanf("%d", &rows);

    for (int i = 1; i < rows; ++i)
    {
        printf("%*c", i, '*');
        printf("%*c", 2 * (rows - i), '*');
        printf("\n");
    }

    printf("%*c", rows, '*');

    printf("\n");

    for (int i = rows - 1; i >= 1; --i)
    {

        printf("%*c", i, '*');
        printf("%*c", 2 * (rows - i), '*');
        printf("\n");
    }

    return 0;
}