#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    scanf("%[^\n]", name);

    int len = strlen(name);
    int i;

    // Print initials of first names
    printf("%c.", name[0]);

    for (i = 1; i < len; i++) {
        if (name[i] == ' ') {
            // Check if this is not the last word
            if (name[i + 1] != '\0') {
                int j = i + 1;

                // Check whether another space exists after this word
                while (name[j] != ' ' && name[j] != '\0')
                    j++;

                if (name[j] == ' ')
                    printf("%c.", name[i + 1]);
                else {
                    printf(" %s", &name[i + 1]);
                    break;
                }
            }
        }
    }

    return 0;
}