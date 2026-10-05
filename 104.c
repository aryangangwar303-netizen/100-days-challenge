#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        int left = x * (x + 1) / 2;
        int right = (x + n) * (n - x + 1) / 2;

        if (left == right) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");
    return 0;
}