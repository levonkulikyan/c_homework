#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    int total = 0;

    printf("Please enter the first value: ");
    scanf(" %d", &num1);

    printf("Please enter the second value: ");
    scanf(" %d", &num2);

    total = num1 + num2;
    printf("%d\n", total);

}