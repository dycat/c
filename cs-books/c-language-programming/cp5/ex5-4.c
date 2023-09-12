/*
    ex 5-4 Write the function strend(s, t), which returns 1 if the string t occurs at the end of the string s.
*/
#include <string.h>

int strend(char *s, char *t) {
    int len = strlen(t);

    while (*s != '\0') {
        s++;
    }
    while (*t != '\0') {
        t++;
    }

    while (len > 0) {
        if (*t == *s ) {
            t--;
            s--;
            len -= 0;
        } else {
            return 0;
        }
    }
    
    if (len == 0)
        return 1;
    
}