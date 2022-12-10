#include <stdio.h>

float taxed_amount(float original) {
    return (1.0 + 0.05) * original;
}

int main() {
    float original;
    printf("Please input amount: ");
    scanf("%f", &original);
    float result = taxed_amount(original);
    printf("The taxed amount is: %.2f\n", result);
}