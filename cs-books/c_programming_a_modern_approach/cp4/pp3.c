#include <stdio.h>

int main() {
    int ones, tens, hunderds;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &hunderds, &tens, &ones);
    printf("The reversal is %d%d%d\n", ones, tens, hunderds);
}