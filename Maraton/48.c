#include <stdio.h>

int main() {
    char str[40] = {};
    printf("Please enter a text: ");
    scanf("%s", str);

    int length = 0;
    for(length; str[length]!= '\0'; ++length){};

    printf("%d\n", length + 1); // ete hashvi enq arnum nayev \0 uremn + 1

    return 0;
}