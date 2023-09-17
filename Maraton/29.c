#include <stdio.h>

int main(){
   
   char sym1 = 0;
   printf("Please enter the 1st symbol: \n");
   scanf(" %c", &sym1);

   char sym2 = 0;
   printf("Please enter the 2nd symbol: \n");
   scanf(" %c", &sym2);


   if((sym1 - sym2 == 32) || (sym1 - sym2 == -32)){
    printf("True for %c and %c \n", sym1, sym2);
   } else{
    printf("False for %c and %c \n", sym1, sym2);
   }

   
   }