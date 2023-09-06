/*
    1-9 Write a program to copy its input to its output, replace each string of one or more blanks by a single blank.
*/
#include <stdio.h>

int main() {
    int c, lastc;
    lastc = '-';
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        }
        if ((c == ' ') & (lastc != ' ')) {
            putchar(c);
        }
        lastc = c;
    }
}

// int main(void) {
//     int c, lastc;

//     lastc = '-';

//     while ((c = getchar()) != EOF) {
//         if (c == ' ') {
//             if (lastc != ' ')
//                 putchar(c);
//         } else
//             putchar(c);
//         lastc = c;
//     }
//     return 0;
// }