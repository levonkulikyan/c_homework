#include <stdio.h>
int main(){
    char str1[50] = {};

    printf("Please enter the text:\n");
    scanf("%49s", str1);
    int strLength = 0;
    for(strLength; str1[strLength] != '\0'; strLength++){};

    char reversed[50] = {};

    int j = 0;
    for(int i = strLength - 1; i >= 0; i--){
        reversed[j] = str1[i];
        j++;
    }

    int check = 0;    
   for(int i = 0; i < strLength; i++){
    if(str1[i] == reversed[i]){
        check++;
    }
   }

    if(check == strLength){
        printf("Is Palindrome");
    } else {
        printf("Is Not Palindrome");
    }
}