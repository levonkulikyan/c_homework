#include <stdio.h>

int main(){
    int min = 0;
   printf("PLease enter the Minimum : \n");
   scanf(" %d", &min);

   int max = 0;
   do{
    printf("PLease enter the Maximum: \n");
    scanf(" %d", &max);
   } while(min > max);
   

   int sum = 0;

   for(int i = min + 1; i < max; ++i){
    if(i % 2 == 0){
        sum += i;
    }
   }

   printf("%d\n", sum);
}