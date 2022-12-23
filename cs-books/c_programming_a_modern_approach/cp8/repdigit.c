#include <stdio.h>

void repeated_digits(int arr[]) {
    int i;
    printf("Repeated digit(s): ");
    for (i = 0; i < 10; i++ ) {
        if (arr[i] > 1) {
            printf(" %d", i);
        }
    }
    printf("\n");
}

void print_count_arr(int count_arr[]) {
    int i;
    printf("Digit:      ");
    for (i = 0; i < 10; i++ ) {
        printf("    %d", i);
    }
    printf("\nOccurences: ");
    int n;
    for (n = 0; n < 10; n++ ) {
        printf("    %d", count_arr[n]);
    }
    printf("\n");
}

int main() {
    long num;
    printf("Enter a number: ");
    scanf("%ld", &num);
    int num_arr[10] = {0};

    while (num > 0) {
        int digit = num % 10;
        num_arr[digit] += 1;
        num /= 10;
    }

    repeated_digits(num_arr);

    print_count_arr(num_arr);

}