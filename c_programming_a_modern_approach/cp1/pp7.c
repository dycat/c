#include <stdio.h>

int main() {
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    int bills_20 = amount / 20;
    amount = amount % 20;
    int bills_10 = amount / 10;
    amount = amount % 10;
    int bills_5 = amount / 5;
    amount = amount % 5;
    int bills_1 = amount / 1;
    printf("$20 biils: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", \
           bills_20, bills_10, bills_5, bills_1);
}