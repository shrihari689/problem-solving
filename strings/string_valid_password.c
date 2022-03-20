// Given a string, check whether it is a valid password, i.e., the string has atleast one upper case alphabet, one lower case alphabet, one digit and a special character and the length of the string should between 8 and 14.(both numbers are inclusive).

#include <stdio.h>

int main()
{
    char a[200];
    scanf("%[^\n]s", a);

    int len = 0;
    int lowercase = 0;
    int uppercase = 0;
    int digit = 0;
    int special_character = 0;

    for (int i = 0; a[i] != '\0'; ++i)
    {
        switch (a[i])
        {
        case 'a' ... 'z':
            lowercase = 1;
            break;
        case 'A' ... 'Z':
            uppercase = 1;
            break;
        case '0' ... '9':
            digit = 1;
            break;
        default:
            special_character = 1;
            break;
        }

        len += 1;
    }

    if ((len >= 8) && (len <= 14) && lowercase && uppercase && digit && special_character)
    {
        printf("Valid Password");
    }
    else
    {
        printf("Invalid Password");
    }

    return 0;
}
