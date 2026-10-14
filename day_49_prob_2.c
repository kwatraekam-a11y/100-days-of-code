//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    // Find the last space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("Formatted name: ");

    // Print initials before the surname
    printf("%c. ", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i - 1] == ' ') {
            printf("%c. ", name[i]);
        }
    }

    // Print surname in full
    for (i = lastSpace + 1; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }

    printf("\n");

    return 0;
}