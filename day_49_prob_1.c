//Print the initials of a name.
#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    // First character is always an initial
    if (name[0] != '\0' && name[0] != '\n') {
        printf("%c", name[0]);
    }

    // Character after every space is an initial
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c", name[i]);
        }
    }

    printf("\n");

    return 0;
}