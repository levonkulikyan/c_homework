#include <stdio.h>

int main(){

int num[4] = {};
int numLength = sizeof(num) / sizeof(int);
int sum = 0;

    
for(int i = 0; i < numLength; i++){
    printf("Please enter a value for index %d\n", i);
    scanf("%d", &num[i]);
    sum += num[i];
}

int smallest = num[0];
for(int i = 1; i < numLength; i++){
    if(smallest > num[i]){
        smallest = num[i];
    }   
}

if(sum == 0){
    printf("%d", smallest);
}

}