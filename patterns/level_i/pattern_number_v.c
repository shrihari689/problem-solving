// 1 2 3 4
//   2 3 4
//     3 4
//       4

#include <stdio.h>

int main()
{
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; ++i)
    {
        for (int j = i; j <= rows; ++j)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}