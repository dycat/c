/*
    1-20 Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop.
*/

#include <string.h>

void detab(char s[]) {
    for (int i = 0; i < strlen(s); i += 1){
        if (s[i] == '\t') {
            s[i] = '    ';
        }
    }
}