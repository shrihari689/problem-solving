//    *
//    *
//    *
// *******
//    *
//    *
//    *

#include <stdio.h>

int main()
{

    int rows;
    scanf("%d", &rows);

    for (int i = 0; i < rows - 1; ++i)
    {
        printf("%*c", rows, '*');
        printf("\n");
    }

    for (int i = 0; i < 2 * rows - 1; ++i)
    {
        printf("*");
    }

    printf("\n");

    for (int i = 0; i < rows - 1; ++i)
    {
        printf("%*c", rows, '*');
        printf("\n");
    }

    return 0;
}