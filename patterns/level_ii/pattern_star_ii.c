// ***********
// *    *    *
// *    *    *
// *    *    *
// *    *    *
// ***********
// *    *    *
// *    *    *
// *    *    *
// *    *    *
// ***********

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int rows = 2 * n - 1;

    for (int i = 0; i <= rows; ++i)
    {
        if (i == 0 || i == n || i == rows)
            for (int j = 0; j < rows; ++j)
                printf("*");
        else
            for (int j = 1; j <= rows; ++j)
                if (j == n || j == rows || j == 1)
                    printf("*");
                else
                    printf(" ");
        printf("\n");
    }

    return 0;
}