#include <stdio.h>

int main() {
    int num;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    int last = num % 8;
    int remind = num / 8;
    int tens = remind % 8;
    remind = remind / 8;
    int hunderds = remind % 8; 
    remind = remind / 8;
    int thurd = remind % 8;
    remind = remind / 8;
    int ten_thurd = remind % 8;
    printf("In octal, your number is: %d%d%d%d%d\n", ten_thurd, thurd, hunderds, tens, last);
}