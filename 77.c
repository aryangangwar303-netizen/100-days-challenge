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

    int distinct = 1;

    for (int i = 0; i < n && i < m; i++) {
        for (int j = i + 1; j < n && j < m; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }

        if (!distinct)
            break;
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}