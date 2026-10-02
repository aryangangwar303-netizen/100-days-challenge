#include <stdio.h>

int main() {
    int arr[100], n, x;
    int ceilIndex = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;   // First occurrence
        }
    }

    printf("%d", ceilIndex);

    return 0;
}