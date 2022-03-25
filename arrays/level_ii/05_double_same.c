#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n], b[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    int end = n - 1;

    int pos = 0, zero_pos = end;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 0)
        {
            b[zero_pos--] = 0;
            continue;
        }

        if ((i != (n - 1)) && (a[i] == a[i + 1]))
        {
            a[i] *= 2;
            a[i + 1] = 0;
        }

        b[pos++] = a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", b[i]);
    }

    return 0;
}