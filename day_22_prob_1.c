//Write a program to check if a number is a strong number.
#include <stdio.h>

int main()
{
    int n, i, fact, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        fact = 1;
        for (i = 1; i <= remainder; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }

    if (sum == n)
    {
        printf("%d is a strong number.", n);
    }
    else
    {
        printf("%d is not a strong number.", n);
    }

    return 0;
}