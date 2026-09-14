//Write a program to print numbers from 1 to n.
#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    do
    {
        printf("%d ", i);
        i++;
    } while (i <= n);

    return 0;
}