#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    scanf("%[^\n]", str);

    char *word = strtok(str, " ");

    while (word != NULL) {
        int len = strlen(word);

        for (int i = len - 1; i >= 0; i--) {
            printf("%c", word[i]);
        }

        word = strtok(NULL, " ");

        if (word != NULL)
            printf(" ");
    }

    return 0;
}