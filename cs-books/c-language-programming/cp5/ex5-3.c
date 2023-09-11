/*
    ex 5-3 Write a pointer version of the function strcat that copies the string t to the end of s.
*/
#include <stdio.h>

void strcatp(char *s, char *t);

int main() {
    char s1[100] = "abc";
    char t1[100] = "def";
    char *s = &s1[0], *t = &t1[0];
    strcatp(s, t);
    printf("%s\n", s);
}

void strcatp(char *s, char *t) {
    
    while (*s != '\0') {
        s++;
    }
    
    while ((*s++ = *t++) != '\0') ;

}