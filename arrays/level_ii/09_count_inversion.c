// Write a program to count the number of inversion in a given array.Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.For simplicity, we may assume that all elements are unique.
// The given array is : 1 9 6 4 5
// The inversions are : (9, 6)(9, 4)(9, 5)(6, 4)(6, 5)
// The number of inversion can be formed from the array is : 5

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                printf("%d %d\n", a[i], a[j]);
                count += 1;
            }
        }
    }

    printf("%d", count);

    return 0;
}