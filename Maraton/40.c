#include <stdio.h>

int main(){
    int num = 0;
    do{
        printf("Please select a number from 1 - 100: \n");
        scanf("%d", &num);
    } while(num < 1 || num > 100);

    int guess = 0;
    int attempts = 0;

   do{
    printf("Guess the number: ");
    scanf("%d", &guess);

    attempts++;


    if(num == guess) {
        printf("Congratulations, You guessed the number %d in %d attempts.\n", num, attempts);
    } else if(guess < num){
        printf("Low try again\n");
    } else printf("High try again\n");

   } while(guess != num);
}