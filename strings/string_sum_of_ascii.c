// Find the sum of ASCII values of the vowels in a given string.

#include <stdio.h>

int is_vowel(char ch)
{
    return (
        (ch == 'A' || ch == 'a') ||
        (ch == 'E' || ch == 'e') ||
        (ch == 'I' || ch == 'i') ||
        (ch == 'O' || ch == 'o') ||
        (ch == 'U' || ch == 'u'));
}

int main()
{

    int sum;
    char a[1000];
    scanf("%[^\n]s", a);

    for (int i = 0; a[i] != '\0'; ++i)
    {
        if (is_vowel(a[i]))
        {
            sum += (int)a[i];
        }
    }

    printf("Sum of ASCII values of vowels = %d", sum);

    return 0;
}