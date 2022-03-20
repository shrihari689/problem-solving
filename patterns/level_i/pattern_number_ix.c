// 1 1 1 1
// 0 0 0 0
// 1 1 1 1
// 0 0 0 0

#include <stdio.h>

int main()
{
    int rows;
    scanf("%d", &rows);
    for (int i = 0, k = 1; i < rows; ++i, k = !k)
    {
        for (int j = 0; j < rows; ++j)
            printf("%d ", k);
        printf("\n");
    }
    return 0;
}