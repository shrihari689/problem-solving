#include <stdio.h>

int main()
{
    long int n;
    int position, digit;
    scanf("%ld %d %d", &n, &position, &digit);

    long int remaining_part = 0, remaining_part_places = 1;

    int index = 0;

    while ((n > 0) && (index != position))
    {
        int rem = n % 10;
        remaining_part += remaining_part_places * rem;
        remaining_part_places *= 10;
        n /= 10;
        index += 1;
    }

    remaining_part %= (remaining_part_places /= 10);
    remaining_part += (remaining_part_places * digit);

    printf("%ld", (n * remaining_part_places * 10) + (remaining_part));

    return 0;
}