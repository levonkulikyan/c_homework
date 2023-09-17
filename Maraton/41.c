#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    char operator = 0;

    while(1){
        printf("Enter the first num1\n");
        scanf("%d",&num1);

        printf("Enter the second num1\n");
        scanf("%d",&num2);

        do{
            printf("Enter the opeartor +, -, / or *\n");
            scanf(" %c",&operator);
        }while(operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != 'Q');

        if(operator == 'Q'){
            break;
        } else if (operator == '+'){
            printf("%d\n", num1 + num2);
        }else if (operator == '-'){
            printf("%d\n", num1 - num2);
        }else if (operator == '*'){
            printf("%d\n", num1 * num2);
        }else if (operator == '/'){
            printf("%d\n", num1 / num2);
        }
       
    }
    return 0;
}