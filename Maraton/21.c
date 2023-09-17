#include <stdio.h>


int main() {
   char sym = 0;

   printf("Please enter a letter\n");
   scanf("%c", &sym);

   switch (sym)
   {
        case 'A' :
        case 'a' :
        case 'E' :
        case 'e' :
        case 'I' :
        case 'i' :
        case 'O' :
        case 'o' :
        case 'U' :
        case 'u' : 
        printf("Vowel\n");
        break;

        default: printf("Consonant\n");
        break;
   }
}