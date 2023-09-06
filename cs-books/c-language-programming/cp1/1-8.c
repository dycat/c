/*
    1-8 Write a program to count blanks, tabs, and newlines.
*/
#include <stdio.h>

int main() {
    int c, count;
    count = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
        // if ((c == '\n') || (c == '\t') || (c == '\b')) {
            count ++;
        }
    }
    printf("%d\n", count);
    
}