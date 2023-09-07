/*
    1-13 Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; 
    a vertical orientaion is more challenging.
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
