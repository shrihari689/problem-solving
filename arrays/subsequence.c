#include <stdio.h>

void printPath(int a[], int last_index)
{
    for (int i = 0; i < last_index; ++i)
        printf("%d", a[i]);
    printf("\n");
}

void printSubsequenceHelper(int a[], int n, int start, int path[], int path_index)
{
    if (start >= n)
        return;

    path[path_index] = a[start];
    printPath(pathih, path_index);
    printSubsequenceHelper(a, n, start + 1, path, path_index + 1);
    printSubsequenceHelper(a, n, start + 1, path, path_index);
}

void printSubsequence(int a[], int n)
{
    int p[n];
    for (int i = 0; i < n; ++i)
    {
        printSubsequenceHelper(a, n, i, p, 0);
        printf("Over for the index: %d\n", i);
    }
}

int main()
{
    int a[] = {1, 2, 3, 4};
    int n = 4;
    printSubsequence(a, n);

    return 0;
}