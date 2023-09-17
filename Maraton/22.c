#include <stdio.h>


int main() {
   int num1 = 0;
   printf("PLease enter the first number: \n");
   scanf(" %d", &num1);

   int num2 = 0;
   printf("PLease enter the second number: \n");
   scanf(" %d", &num2);

    if(num1 > num2){
        printf("%d\n", num1);
    } else {
        printf("%d\n", num2);
    }
}