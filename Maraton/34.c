#include <stdio.h>

int main() {
    int n = 0;
    do{
    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &n);
    } while(n <= 0);

    int first = 0;
    int second = 1;
    int next = 0;
    int count = 0;


    do {
        if (count <= 1) {
            next = count;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
        count++;
    } while (count < n);

    printf("\n");

    return 0;
}