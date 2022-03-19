//     *
//    * *
//   * * *
//  * * * *
// * * * * *

#include <stdio.h>

int main()
{
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; ++i)
    {
        for (int k = 0; k < rows - i; ++k)
            printf(" ");

        for (int j = 0; j < i; ++j)
            printf("* ");

        printf("\n");
    }
    return 0;
}