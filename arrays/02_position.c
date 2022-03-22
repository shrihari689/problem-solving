#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long int a[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%ld", &a[i]);
    }
    int pos;
    scanf("%d", &pos);

    printf("%ld", a[pos]);

    return 0;
}