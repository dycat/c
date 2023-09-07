/* 
    1-15 Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
*/
#include <stdio.h>

int main() {
    fahr_to_celsius(0, 300, 200);
}

void fahr_to_celsius(int lower, int upper, int step) {
    
    for (int fahr = lower; fahr <= upper; fahr += step) {
        int celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
    }
    
}