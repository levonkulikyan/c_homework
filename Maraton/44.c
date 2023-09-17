#include <stdio.h>

int main(){
     int num1 = 0;
   printf("PLease enter the first number: \n");
   scanf(" %d", &num1);

   int num2 = 0;
   printf("PLease enter the Second number: \n");
   scanf(" %d", &num2);

    printf("%d XOR %d is %d", num1, num2, num1 ^ num2);

}