#include <stdio.h>

int main(){
   
int num = 0;
int originalNum = 0;
int sum = 0;


do{
    printf("Please enter a number greater then 12:\n");
    scanf("%d", &num);
} while(num <= 12);

while(num != 0){
   sum += num % 10;
   num /= 10;
}

printf("%d\n", sum);



return 0;
   
 }