// Count total number of vowels and consonants in a string.

#include <stdio.h>

char to_lower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;
    return ch;
}

int main()
{
    char a[100];
    int vowels = 0, consonants = 0;
    scanf("%[^\n]s", a);

    for (int i = 0; a[i] != '\0'; ++i)
    {
        a[i] = to_lower(a[i]);
        switch (a[i])
        {
        case 'a' ... 'z':
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
                vowels += 1;
            else
                consonants += 1;
            break;
        }
    }

    printf("No of vowels: %d\n", vowels);
    printf("No of consonants: %d", consonants);
    return 0;
}