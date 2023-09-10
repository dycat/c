/*
    ex 3-2 Write a function escape(s, t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies 
    the string t to s. Use a switch. Write a function for the other direction as well, 
    converting escape sequences escape sequences into the real characters.
*/
#include <stdio.h>

void escape(char s[], char t[]);

int main() {
    char s[1000];
    char t[] = "char\tof me";
    escape(s, t);
    printf("%s\n", s);
}

void escape(char s[], char t[]) {
    int i, j;
    for (i = j = 0; t[i] != '\0'; i += 1) {
        switch (t[i])
        {
        case '\t': 
            s[j] = '\\';
            s[++j] = 't';
            break;
        case '\n':
            s[j] = '\\';
            s[++j] = 'n';
            break;
        default:
            s[j] = t[i];
            break;
        }
        j++;
    }
    s[j] = '\0';
}