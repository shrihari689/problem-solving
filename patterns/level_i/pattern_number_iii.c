// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

#include <stdio.h>

int main()
{

    int rows;
    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 0; j < rows; ++j)
            printf("%d ", i);
        printf("\n");
    }
    return 0;
}
