/*
    ex 2-5 Write the function any(s1, s2), which returns the first location in a sting s1 where any character from string s2 occurs, or -1 if s1 contains no characters from s2.
*/
#include <stdio.h>

int contain(char c, char s[]);
int any(char s1[], char s2[]);

int main() {
    char s1[] = "abc";
    char s2[] = "edf";
    printf("%d\n", any(s1, s2));
}


int any(char s1[], char s2[]) {
    for (int i = 0; s1[i] != '\0'; i += 1) {
        if (contain(s1[i], s2) == 1) {
            return i;
        }
    }
    return -1;
}

int contain(char c, char s[]) {
    for (int i = 0; s[i] != '\0'; i += 1) {
        if (s[i] == c) {
            return 1;
        }
    }
    return 0;
}