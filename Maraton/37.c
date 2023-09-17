#include <stdio.h>

int main(){
    int rowNum = 0;

    do{
        printf("Please enter number of the row: ");
        scanf("%d", &rowNum);
    }while(rowNum <= 0);

    for(int i = 1; i <= rowNum; i++){
        for(int row = 1; row <= i; row++){
            printf("%d", i);
        }
        printf("\n");
    }


  
  return 0;
}