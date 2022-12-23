#include <stdio.h>

int main() {
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);
    if (input > 999 && input < 9999) {
        printf("The number %d has 4 digits\n", input);
    } 
    if (input < 1000 & input > 99) {
        printf("The number %d has 3 digits\n", input);
    }
    if (input < 100 && input > 9 ) {
        printf("The number %d has 2 digits\n", input);
    }
    if (input < 10) {
        printf("The number %d has 1 digits\n", input);
    }

}
