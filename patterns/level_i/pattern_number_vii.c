// 1 1 1 1 1
// 1 0 0 0 1
// 1 0 0 0 1
// 1 0 0 0 1
// 1 1 1 1 1

#include <stdio.h>

int main()
{
    int rows;
    scanf("%d", &rows);
    for (int i = 0; i < rows; ++i)
    {
        printf("1 ");
        for (int j = 0; j < rows - 2; ++j)
            if (i == 0 || (i == rows - 1))
                printf("1 ");
            else
                printf("0 ");
        printf("1 ");
        printf("\n");
    }
    return 0;
}