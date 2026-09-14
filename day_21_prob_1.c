//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main()
{
    int n, first, last, digits, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    digits = 0;
    temp = n;
    while (temp != 0)
    {
        temp = temp / 10;
        digits++;
    }

    first = n / (10^(digits - 1));

    temp = n - (first * (10^(digits - 1)));
    temp = temp + (first * (10^(digits - 1)));
    temp = temp - (last * (10^(digits - 1)));
    temp = temp + (last * (10^(digits - 1)));

    printf("Number after swapping first and last digit: %d", temp);

    return 0;
}