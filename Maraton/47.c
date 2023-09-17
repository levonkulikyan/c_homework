#include <stdio.h>

int main() {
    char str[40] = {};
    printf("Please enter a text: ");
    scanf("%s", str);

    int length = 0;
    for(length; str[length]!= '\0'; ++length){};


    for(int i = length - 1; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}