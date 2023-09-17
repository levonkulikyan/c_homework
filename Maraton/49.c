#include <stdio.h>

int main() {
    char str[50];
    printf("Please enter the string: ");
    fgets(str, sizeof(str), stdin);

    int strLength = 0;
    for(strLength; str[strLength] != '\0'; strLength++){};

    char str1[50] = {};

    int str1i = 0;
    for(int i = 0; i < strLength; i++){
        if(str[i] != ' '){
            str1[str1i] = str[i];
            str1i++;
        }
    }


    printf("%s", str1);

    return 0;
}