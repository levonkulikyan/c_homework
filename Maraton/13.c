#include <stdio.h>

int main(){
    
int celcius = 0;

printf("Please enter the Temperature in Celcius\n ");
scanf(" %d", &celcius);

printf("The temperatue in Fahrenheit is %d degree\n", (celcius * 9/5) + 32 );
}