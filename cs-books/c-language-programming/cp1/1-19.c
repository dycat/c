/*
    1-19 Write a function reverse(s) that reverses the character sting s. Use it to write a program that reverses its input a line at a time.
*/
#include <string.h>
#include <stdio.h>

#define MAXLINE 1000

void get_current_line(char s[], int maxline);
void reverse(char from[], char to[], int maxline);

int main() {
    char line[MAXLINE];
    char reversed[MAXLINE];

    get_current_line(line, MAXLINE);
    reverse(line, reversed, MAXLINE);
    printf("%s\n", reversed);
}

void get_current_line(char s[], int maxline) {
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c !=  '\n'; i += 1) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        i += 1;
    }
    s[i] = '\0';
}

void reverse(char from[], char to[], int maxline) {

    int n = 0;
    int i = strlen(from) - 2;

    while( (to[n] = from[i]) != '\0' && n < maxline - 1) {
        i -= 1;
        n += 1;
    }

    to[n] = '\n';
    n += 1;
    to[n] = '\0';

}