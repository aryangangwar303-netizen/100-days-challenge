#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int k = 0; k < n + m - 1; k++) {
        int row, col;

        if (k < m) {
            row = 0;
            col = k;
        } else {
            row = k - m + 1;
            col = m - 1;
        }

        while (row < n && col >= 0) {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}