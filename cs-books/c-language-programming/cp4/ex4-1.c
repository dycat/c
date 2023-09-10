/*
    ex 4-1 Write the function strindex(s, t) which returns the position of the rightmost occurrence of t in s, or -1 if there is none.
*/
#include <string.h>

int strindex(char s[], char t) {
    for (int i = strlen(s); i > 0; i -= 1) {
        if (s[i] == t) {
            return i;
        }
    }
    return -1;
}
