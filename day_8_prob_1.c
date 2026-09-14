//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("The character is an uppercase alphabet.");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("The character is a lowercase alphabet.");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("The character is a digit.");
    }
    else
    {
        printf("The character is a special character.");
    }

    return 0;
}