#include <stdio.h>
int main(){
    char sym = 0;
     
    
        printf("Please enter a value\n");
        scanf(" %c", &sym);


    if(sym >= 48 && sym <= 57){
         printf("True\n");

    } else printf("False\n");
      
    return 0;
}