#include <stdio.h>

int main(){
   
int num = 0;
int originalNum = 0;
int result = 0;


do{
    printf("Please enter a number greater then 12:\n");
    scanf("%d", &num);
} while(num <= 12);

while(num != 0){
   result = result * 10 +  num % 10;
   num /= 10;
}

printf("%d", result);



return 0;
   
 }