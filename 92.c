#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';

        if (freq[index] == 1) {
            printf("%c", str[i]);
            return 0;
        }

        freq[index]++;
    }

    return 0;
}