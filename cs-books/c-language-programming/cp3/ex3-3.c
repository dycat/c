/*
    ex 3-3 Write a function expand(s1, s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz
    in s2.
*/
#include <stdio.h>

void expand(char s1[], char s2[]);

int main() {
    char s1[] = "a-z";
    char s2[1000];
    expand(s1, s2);
    printf("%s", s2);
}

void expand(char s1[], char s2[]) {
    int c, i, j;
    
    i = j = 0;

    while ((c = s1[i++]) != '\0') {
        if ( c != '-' && s1[i + 1] >= c ) {
            i++;
            while (c < s1[i])
            {
                s2[j++] = c++;
            }
            
        } else {
            s2[j++] = c;
        }
    }

    s2[j] = '\0';
    

}