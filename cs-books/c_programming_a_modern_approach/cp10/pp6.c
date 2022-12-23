#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

#define STACK_SIZE 100
void print_stack();

int contents[STACK_SIZE];
int top = 0;

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full() {
    return top == STACK_SIZE;
}

void push(int c) {
    if (is_full()) {
        return;
    } else {
        contents[top] = c;
        top += 1;
    }
}

int pop(void) {
    if (is_empty()) {
        return 0;
    } else {
        return contents[--top];
        // top -= 1;
        // int poped = contents[top];
        
        // return poped;
    }
}

void print_stack() {
    int i;
    for (i=0; i < top; i++) {
        printf("%d ", contents[i]);
    }
    printf("\n");
}

// RPN Help Function
int add() {
    int num2 = pop();
    int num1 = pop();
    return num1 + num2;
}

int minus() {
    int num2 = pop();
    int num1 = pop();
    return num1 - num2;
}

int times() {
    int num2 = pop();
    int num1 = pop();
    return num1 * num2;
}

int divide() {
    int num2 = pop();
    int num1 = pop();
    return num1 / num2;
}

void rpn(char ch) {
    printf("Enter an RPN expression: ");
    do {
        ch = getchar();
        
        if (isdigit(ch)) {
            int digit = (int) ch - 48;
            push(digit);
        } 
        switch(ch) {
                    case '+':
                        push(add());
                        break;
                    case '-':
                        push(minus());
                        break;
                    case '*':
                        push(times());
                        break;
                    case '/':
                        push(divide());
                        break;
                    case '=':
                        printf("Value of expression: %d\n", contents[top - 1]);
                        break;
                } 

    } while (ch != '\n');
    
}

int main() {
    char ch;
    do {
        rpn(ch);
        make_empty();
    } while(ch != 'q');
}