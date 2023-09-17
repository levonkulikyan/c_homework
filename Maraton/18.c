#include <stdio.h>


int main() {
  int A;
  int B;

    printf("Truth Table for A || B && !(B || A)\n");
    printf("A\tB\tResult\t\n");

    for(A = 0; A<=1; A++){
        for(B = 0; B <= 1;B++){
            printf("%d\t%d\t%d\t\n", A, B, A || B && !(B || A));
        }
    }

    return 0;
}