#include <stdio.h>

int main() {
    char str[100], temp;
    int i = 0, j;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (str[i] != '\0') {
        i++;
    }

    j = i - 1;

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}