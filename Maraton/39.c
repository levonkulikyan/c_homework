#include <stdio.h>

int main(){
    int row = 0;

    do{
        printf("Please enter number of the row: ");
        scanf("%d", &row);
    }while(row <= 0);

    for(int i = 1; i <= row; i++){
        for(int row = 1; row <= i; row++){
            printf("%s", "* ");
        }
        printf("\n");
    }


  
  return 0;
}