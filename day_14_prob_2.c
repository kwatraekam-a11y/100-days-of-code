//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main()
{
    int n, i, product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }

    printf("Product of even numbers from 1 to %d = %d", n, product);

    return 0;
}