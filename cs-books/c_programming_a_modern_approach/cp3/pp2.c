#include <stdio.h>

int main() {
    int item_num;
    float unit_price;
    int day, month, year;
    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyy): ");
    scanf("%d/%d/%d", &month, &day, &year); 
    printf("Item    Unit price    Purchase\n");
    printf("%d      $ %.2f      %d/%d/%d\n", item_num, unit_price, month, day, year);
}