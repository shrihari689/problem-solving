//     5
//    5 4
//   5 4 3
//  5 4 3 2
// 5 4 3 2 1

#include <stdio.h>

int main()
{
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 0; j < rows - i; ++j)
            printf(" ");
        for (int j = rows; j >= (rows - i + 1); --j)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}