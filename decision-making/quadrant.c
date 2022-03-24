// Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    char quadrant[4][10] = {
        "First",
        "Second",
        "Third",
        "Fourth"};

    int selected_quadrant;

    if ((x > 0) && (y > 0))
        selected_quadrant = 0;
    else if ((x < 0) && (y > 0))
        selected_quadrant = 1;
    else if ((x < 0) && (y < 0))
        selected_quadrant = 2;
    else if ((x > 0) && (y < 0))
        selected_quadrant = 3;

    printf("The coordinate point (%d,%d) lies in the %s quadrant.", x, y, quadrant[selected_quadrant]);

    return 0;
}