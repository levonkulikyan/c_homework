#include <stdio.h>

int main() {
    int year = 0;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d Nahanj tari e \n", year);
    } else {
        printf("%d Nahanj tari che.\n", year);
    }

    return 0;
}