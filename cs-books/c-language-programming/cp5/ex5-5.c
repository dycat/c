/*
    ex 5-5 Write version of the library functions strncpy, strncat, and strncmp, which operate on at 
    most the first n characters of their argument strings. For example, strncpy(s, t, n) copies at most n
    characters of t to s. 
*/
#include <string.h>
#include <stdio.h>

char *mystrncpy(char *s, char *ct, int n);
char *mystrncat(char *s, char *ct, int n);
char *mystrncom(char *cs, char *ct, int n);

int main() {

    char st[12] = "helloworld";
    char to[100];
    char *ct = &st[0], *s = &to[0];
    mystrncpy(s, ct, 2);
    printf("%s\n", s);

    char c1[100] = "hello ";
    char c2[100] = "world";
    char *ct1 = &c1[0], *ct2 = &c2[0];
    mystrncat(ct1, ct2, 5);
    printf("%s\n", ct1);
}

char *mystrncpy(char *s, char *ct, int n) {

    int lenct = strlen(ct);
    int i = 0;

    while(i < n) {
        if ( i > lenct && lenct <= n)
        {
            s++;
            *s = '\0';
            lenct += 1;
        } else {
            *s = *ct;
            s++;
            ct++;
        }
        i += 1;
    }

    return s;
    
}


char *mystrncat(char *s, char *ct, int n) {
    int i = 0;
    while (*s != '\0')
        s++;

    while (i < n) {
        *s = *ct;
        s++;
        ct++;
        i += 1;
    }
    s++;
    *s = '\0';

    return s;
    
}

char *mystrncmp(char *cs, char *ct, int n) {
    
}
