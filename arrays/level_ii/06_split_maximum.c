// Take an array of length n where all the numbers are nonnegative and unique. Find the element in the array possessing the highest value. Split the element into two parts where first part contains the next highest value in the array and second part hold the required additive entity to get the highest value. Print the array where the highest value get splitted into those two parts.
// For example:
// the given array is : 4 8 6 3 2
// the updated array is : 4 6 2 6 3 2
// Explanation :
// In the input the highest value is 8 , it is splited into two parts with next highest value which is 6 and the remaining value is 2

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n + 1];

    int maximum = 0;
    int second_maximum = 0;
    int maximum_index = 0;

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        if (a[i] > maximum)
        {
            second_maximum = maximum;
            maximum = a[i];
            maximum_index = i;
        }
        else if (a[i] > second_maximum)
        {
            second_maximum = a[i];
        }
    }

    int new_element = maximum - second_maximum;

    a[maximum_index] = second_maximum;

    for (int i = n; i > maximum_index; --i)
    {
        a[i] = a[i - 1];
    }

    a[maximum_index + 1] = new_element;

    for (int i = 0; i < (n + 1); ++i)
    {
        printf("%d ", a[i]);
    }

    return 0;
}