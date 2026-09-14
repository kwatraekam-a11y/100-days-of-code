//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main()
{
    int n, product = 1, remainder, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        if (remainder % 2 != 0)
        {
            product = product * remainder;
            hasOdd = 1;
        }
        n = n / 10;
    }

    if (hasOdd)
    {
        printf("Product of odd digits = %d", product);
    }
    else
    {
        printf("No odd digits found.");
    }

    return 0;
}