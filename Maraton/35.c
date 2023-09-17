#include <stdio.h>

int main(){
   
int num = 0;

do{
    printf("Please enter a number: ");
    scanf("%d", &num);
} while(num <= 0);

for(int i = 1; i <= num; i++){
    printf("%d * %d = %d\n", num, i, num * i);
}




return 0;
   
}