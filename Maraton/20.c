#include <stdio.h>


int main() {
    int num = 0;
    printf("Please enter the number\n");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}