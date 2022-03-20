// Given a string, the task is to find maximum consecutive repeating character in string.

#include <stdio.h>

int main()
{

    char a[200];
    scanf("%s", a);

    char current_character = '\0';
    char maximum_character = '\0';
    int current_character_count = 0;
    int maximum_count = -1;

    for (int i = 0;; ++i)
    {
        if (current_character != a[i])
        {
            if (current_character_count > maximum_count)
            {
                maximum_count = current_character_count;
                maximum_character = current_character;
            }
            current_character = a[i];
            current_character_count = 1;
        }
        else
        {
            current_character_count += 1;
        }

        if (a[i] == '\0')
            break;
    }

    printf("%c %d", maximum_character, maximum_count);

    return 0;
}