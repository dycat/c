/*
    1-5 Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
*/
#include <stdio.h>

int main() {
    float farh, celsius;

    for (farh = 0; farh <=300; farh += 20) {
        celsius = (farh - 32.0) * (5.0 / 9.0);
        printf("%3.0f\t%3.1f\n", farh, celsius); 
    }
}