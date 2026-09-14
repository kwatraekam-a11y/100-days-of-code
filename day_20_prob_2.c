//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main()
{
    int n, i, binary[32], j;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    i = 0;
    while (n != 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("1's complement: ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", 1 - binary[j]);
    }

    return 0;
}