#include <stdio.h>

int main() {
    char input[40];
    printf("Please enter a text: ");
    fgets(input, sizeof(input), stdin);


    printf("Numbers in the input: ");
  

    for (int i = 0; input[i] != '\0'; i++) {
        
        if (input[i] >= '0' && input[i] <= '9') {
            printf("%c", input[i]); // Output the digit
        }
    }
    printf("\n");
    return 0;
}