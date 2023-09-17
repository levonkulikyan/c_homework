#include <stdio.h>
int main(){
    char sym = 0;
     
    do{
        printf("Please enter a value from A-Z\n");
        scanf(" %c", &sym);
    } while(sym < 65 || sym > 90);

    
       printf("%c\n", sym + 32);

    return 0;
}