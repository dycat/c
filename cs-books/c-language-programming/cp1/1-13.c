/*
    1-13 Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; 
    a vertical orientaion is more challenging.
*/
#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ') {
            putchar('\n');
        } else {
            putchar(c);
        }
    }
    
}