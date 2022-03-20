// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1

#include <stdio.h>

int main()
{
    int rows;
    scanf("%d", &rows);
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0, k = 1; j <= i; ++j, k = !k)
            printf("%d ", k);
        printf("\n");
    }
    return 0;
}