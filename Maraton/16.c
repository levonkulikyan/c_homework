#include <stdio.h>

int main(){

    int height = 0;
    do{   
        printf("Please enter your height in cm: \n");
        scanf(" %d", &height);
    } while(height < 50 || height > 300);
 


    if(height >= 150){
        printf("Duq hamapatasxanum eq");
    } else {
        printf("Duq cheq hamapatasxanum");
    }

}