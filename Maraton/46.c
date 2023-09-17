#include <stdio.h>

int main() {
    int num = 0;
    int count1 = 0;
    int count0 = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        if (num & 1) {
            count1++;
        } else {
            count0++;
        }
        num >>= 1;
    }

    printf("Number of 0's: %d\n", count0);
    printf("Number of 1's: %d\n", count1);

    return 0;
}