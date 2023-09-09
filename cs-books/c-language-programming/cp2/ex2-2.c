/*
    ex 2-1 Write a loop equivalent to the for loop above without using && or ||.
*/
#include <stdio.h>

for (i = 0; i < lim -1; i++) {
    if ((int c = getchar()) != '\n') {
        if (c != EOF) {
            s[i] = c;
        }
    }
}