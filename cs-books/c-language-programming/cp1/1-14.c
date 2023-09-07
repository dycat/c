/*
    1-14 Write a program to print a histogram of the frequencies of different characters in its input.
*/
#include <stdio.h>

int main() {
    int c;
    int digit[128];
    int count = 0;

    for (int n = 0; n< 128; n++) {
        digit[n] = 0;
    }

    while ((c = getchar()) != EOF) {
        digit[c] = digit[c] + 1;
    }

    for(int i = 0; i < 128; i++) {
        for (int j = 0; j < digit[i]; j++) {
            printf("*");
        }
    }
    
}
