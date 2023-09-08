/*
    1-17 Write a program to print all input lines that are longer than 80 characters.
*/
#include <stdio.h>

#define MAXLINE 1000

int get_current_line(char line[], int maxline);

int main() {
    int len;
    char line[MAXLINE];

    while ((len = get_current_line(line, MAXLINE)) > 80) {
        printf("%s", line);
    }
    
}

int get_current_line(char line[], int maxline) {
    int c, i;

    for (i = 0; i < maxline -1 && (c = getchar()) != EOF && c != '\n'; i += 1) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        i += 1;
    }

    line[i] = '\0';

    return i;
}