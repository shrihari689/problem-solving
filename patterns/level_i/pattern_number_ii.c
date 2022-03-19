// 4
// 4 4
// 4 4 4
// 4 4 4 4

#include <stdio.h>

int main()
{

    int rows;
    scanf("%d", &rows);

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j <= i; ++j)
            printf("%d ", rows);
        printf("\n");
    }
    return 0;
}
