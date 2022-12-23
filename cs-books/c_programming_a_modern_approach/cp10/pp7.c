#include <stdio.h>

#define MAX_DIGITS 10

const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1},
};
const char display[7] = {
    '_', '|', '|', '_', '|', '|', '_'
};
char digits[3][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);
void handle_display();

int main() {
    clear_digits_array();

   handle_display();
    
    print_digits_array();
}

void handle_display() {
    int n = 0;
    char ch;
    printf("Please Enter number: ");
    do {
       ch = getchar();
       int digit = ch - 48;

       process_digit(digit, n);
       n += 1;
    } while (n < 10 && ch != '\n');
    
}

// make all element 0
void clear_digits_array(void) {
      int i, j;
    for (i=0; i < 3; i++) {
        for (j=0; j < MAX_DIGITS * 4; j++) {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position) {
    int i;
    
    for (i = 0; i < 7; i++ ) {
        if (segments[digit][i] == 1) {
            switch (i) {
                case 0: digits[0][1 + position * 4] = display[i];break;
                case 1: digits[1][2 + position * 4] = display[i];break;
                case 2: digits[2][2 + position * 4] = display[i];break;
                case 3: digits[2][1 + position * 4] = display[i];break;
                case 4: digits[2][0 + position * 4] = display[i];break;
                case 5: digits[1][0 + position * 4] = display[i];break;
                case 6: digits[1][1 + position * 4] = display[i];break;
            }
        }
    }

}

void print_digits_array() {
    int i, j;
    for (i=0; i < 3; i++) {
        for (j=0; j < MAX_DIGITS * 4; j++) {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}