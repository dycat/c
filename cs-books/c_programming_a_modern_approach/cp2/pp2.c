#include <math.h>
#include <stdio.h>

float compute_sphere(float radius) {
    return (4.0f / 3.0f) * M_PI * radius * radius * radius;
}

int main() {
    float radius;
    printf("Please input radius: ");
    scanf("%f" , &radius);
    float result = compute_sphere(radius);
    printf("The result is:  %.4f", result);
}

