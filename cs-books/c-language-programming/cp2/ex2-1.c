/*
    ex 2-1 Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, 
    by printing appropriate values from standard header and by direct computation.
*/
#include <limits.h>
#include <stdio.h>

void print_limits() {
    printf("The range of following type:\n");
    printf("char: %d %d\n", CHAR_MIN, CHAR_MAX);
    printf("short: %d %d\n", SHRT_MIN, SHRT_MAX);
    printf("int: %d %d\n", INT_MIN, INT_MAX);
    printf("long: %ld %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned char: %d\n", UCHAR_MAX);
    printf("unsigned short: %d\n", USHRT_MAX);
    printf("unsigned int: %u\n", UINT_MAX);
    printf("unsigned long: %lu\n", ULONG_MAX);

}

int main() {
    print_limits();
}