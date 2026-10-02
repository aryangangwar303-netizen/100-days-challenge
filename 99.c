#include <stdio.h>

int main() {
    char date[20];
    int day, month, year;

    scanf("%d/%d/%d", &day, &month, &year);

    printf("%02d-Apr-%d", day, year);

    return 0;
}