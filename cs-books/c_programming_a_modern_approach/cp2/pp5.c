#include <stdio.h>

int polynomial(int x) {
    return ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x -6;
}

int main() {
    int x;
    printf("Please input the value of x: ");
    scanf("%d", &x);
    int result = polynomial(x);
    printf("The result is: %d\n", result);
}