#include <stdio.h>

int main() {
    int num = 0;
    printf("Please enter a number\n");
    scanf("%d", &num);
    int bit5 = num ^ 32;
    
    if(bit5 > num){
        printf("%d\n", bit5);
    } else {
        printf("%d\n", num);
    }
}