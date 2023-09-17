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

    int min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
    int gcd = 1;

    for(int i = 1; i <= min; i++){
        if(num1 % i == 0 && num2 % i == 0 && num3 % i == 0){
            gcd = i;
        }
    }

    printf("The GCD of %d, %d and %d is %d\n", num1, num2, num3, gcd);
    return 0;
}