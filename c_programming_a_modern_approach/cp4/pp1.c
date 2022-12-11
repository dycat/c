#include <stdio.h>

int reverse_num(int num) {
    if (num < 100) {
        int ones = num % 10;
        int tens = num / 10;
        return ones * 10 + tens;
    }
    if (num > 100) {
        int hunderds = num / 100;
        int remind = num % 100;
        int tens = remind / 10;
        int ones = remind % 10;
        return ones * 100 + tens * 10 + hunderds;
    }
    return 0;
}

int main() {
    int num;
    printf("Enter a two-digit or three-digit number: ");
    scanf("%d", &num);
    int result = reverse_num(num);
    printf("The reversal is %d\n", result);
}