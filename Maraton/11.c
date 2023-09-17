#include <stdio.h>
int main(){
   char vow[10] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
   char txt[100] ;
   int txtLength;
   int vowels = 0;

   printf("Please enter text:\n");
   scanf(" %99s", txt);

   for(txtLength = 0; txt[txtLength] != '\0'; txtLength++ ){};

   for(int i = 0; i < txtLength; i++){
    char c = txt[i];
        for(int j = 0; j < sizeof(vow); j+= 2){
            if(c == vow[j] || c == vow[j + 1]){
                ++vowels;
            }
        }

   }

   printf(" There are %d Vowels and %d Consonants in the text", vowels, txtLength - vowels);
    return 0;
}