#include <stdio.h>

int main(){
    int rowNum = 0;
    char pattern = '*';
    char space = ' ';


    do{
        printf("Please enter number of the row: ");
        scanf("%d", &rowNum);
    }while(rowNum <= 0);


    for(int i = 1; i <= rowNum; i++){

        for(int row = 1; row <= rowNum; row++){

          if(i == 1 || i == rowNum){
            printf("%c%c", pattern,space);
          } else {
            if(row == 1 || row == rowNum){
                printf("%c%c", pattern,space);
            } else {
                printf("%c%c",space,space);
            }
          }
            
        }

        printf("\n");
    }


  
  return 0;
}