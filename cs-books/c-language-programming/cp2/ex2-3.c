/* 
    ex 2-3 Write a program htoi(s), which convers a string of hexadecimal digits (including an optional 0x or 0x) into its quivalent integer value. 
    The allowable digits are 0 through 9, a through f, and A through F.
*/
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

int htoi(char s[]);

int main() {
    printf("result is: %d\n", htoi("0x2"));
    printf("result is: %d\n", htoi("0xA"));
    printf("result is %d\n", htoi("0xC9"));
}

int htoi(char s[]) {
    int n = 0;
    int len  = strlen(s);
    for (int i = 2; i < len; i += 1) {
        if (s[i] <= '9') {
            n += (s[i] - '0') * pow(16, len - i - 1);
        } else {
            n += (s[i] - '0' - 7) * pow(16, len - i -1);
        }
        
    }

    return n;
}