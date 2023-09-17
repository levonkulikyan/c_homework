#include <stdio.h>

int main() {
    int num1 = 0;
   printf("PLease enter the first number: \n");
   scanf(" %d", &num1);

   int num2 = 0;
   printf("PLease enter the Second number: \n");
   scanf(" %d", &num2);

   if(num1 % num2 == 0 || num2 % num1 == 0){
    printf("Karox en bajanvel irar vra\n");
   } else {
    printf("Chen karox bajanvel irar vra\n");
   }
}