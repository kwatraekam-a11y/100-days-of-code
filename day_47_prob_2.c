//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[100], word[100];
    int i = 0, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j] = str[i];
            j++;
        }
        else {
            word[j] = '\0';

            if (j > maxLength) {
                maxLength = j;
                strcpy(longest, word);
            }

            j = 0;
        }

        if (str[i] == '\0' || str[i] == '\n') {
            break;
        }

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLength);

    return 0;
}