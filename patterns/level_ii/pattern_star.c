// *********
// **     **
// * *   * *
// *  * *  *
// *   *   *
// *  * *  *
// * *   * *
// **     **
// *********

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int rows = 2 * n - 1;

    for (int i = 0; i < rows; ++i)
        printf("*");

    printf("\n");

    for (int i = 0; i < rows - 2; ++i)
    {
        printf("*");
        for (int j = 0; j < rows - 2; j++)
        {
            if (j == i || j == rows - 3 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("*");
        printf("\n");
    }

    for (int i = 0; i < rows; ++i)
        printf("*");

    return 0;
}