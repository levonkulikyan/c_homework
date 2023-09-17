#include <stdio.h>

int main(){

    int x = 0;
    int y = 0;

    printf("Please enter the first value: ");
    scanf(" %d", &x);

    printf("Please enter the second value: ");
    scanf(" %d", &y);

    printf("%d\n", x * y + 21 * x / y-200);

}