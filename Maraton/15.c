#include <stdio.h>

int main(){

    int mark = 0;
    do{   
        printf("Please enter your mark: \n");
        scanf(" %d", &mark);
    } while(mark < 0 && mark > 100);
 


    if(mark >=90){
        printf("A Class");
    } else if(mark >= 80 && mark <= 89){
        printf("B Class");
    } else if(mark >= 70 && mark <= 79){
        printf("C Class");
    }else if(mark >= 60 && mark <= 69){
        printf("D Class");
    } else {
        printf("E Class");
    }

}