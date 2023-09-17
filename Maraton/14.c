#include <stdio.h>

int main(){

int age = 0;

printf("Please enter your age: \n");
scanf(" %d", &age);

if(age < 18){
    printf("Duq anchapahas eq\n");
} else if(age >= 18 && age <= 65){
    printf("Duq chapahas eq");
} else {
    printf("Du tarec qaxaqaci es");
}

}