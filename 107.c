#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find previous greater element
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        // Search from nearest left element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }

        if (i > 0)
            printf(", ");

        printf("%d", prevGreater);
    }

    return 0;
}