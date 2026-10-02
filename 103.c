#include <stdio.h>

int main() {
    int nums[100], n;
    int totalSum = 0, leftSum = 0;
    int pivot = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    for (int i = 0; i < n; i++) {
        // Right sum = total - left sum - current element
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            pivot = i;
            break;   // Leftmost pivot index
        }

        leftSum += nums[i];
    }

    printf("%d", pivot);

    return 0;
}