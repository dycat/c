/*
Write a program to print the corresponding celsius to fahrenheit table.
*/
#include <stdio.h>

int main() {
    // the variable to store the value.
    float celsius, fahr;
    float upper, lower, step;

    step = 20.0;
    upper = 300.0;
    lower = 0.0;

    while (celsius<=upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f \t %3.0f\n", celsius, fahr);
        celsius += step;
    }

}