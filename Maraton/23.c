#include <stdio.h>


int main() {
    int num1 = 0;
   printf("PLease enter the first number: \n");
   scanf(" %d", &num1);

   int num2 = 0;
   printf("PLease enter the Second number: \n");
   scanf(" %d", &num2);

   int num3 = 0;
   printf("PLease enter the Third number: \n");
   scanf(" %d", &num3);

    int biggest;
    if(num1 > num2){
        biggest = num1;
    } else {
        biggest = num2;
    };

    if(biggest < num3){
        biggest = num3;
    }

    if(num1 == num2 || num1 == num3 || num2 == num3){
        printf("The Biggest number is %d\n", biggest);
    }
}

 