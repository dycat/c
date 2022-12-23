#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
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

void push(char c) {
    if (is_full()) {
        return;
    } else {
        contents[top] = c;
        top += 1;
    }
}

char pop(void) {
    if (is_empty()) {
        return 0;
    } else {
        top -= 1;
        char poped = contents[top];
        
        return poped;
    }
}

int main() {
    printf("Enter parenteses and/or brances: ");
    char ch;
    do {
        ch = getchar();
        if (ch == '{' || ch == '(') {
            push(ch);
        } else if (ch == '}' || ch == ')') {
            char ch_in_stack = pop();
            
            if ((ch_in_stack == '{' && ch != '}') || (ch_in_stack == '(' && ch != ')')) {
                printf("Parenteses/braces are not nested properly.\n");
            }
        } else if (ch == '\n') {
            if (is_empty()) {
                printf("Parenteses/braces are nested properly.\n");
            } else {
                printf("Parenteses/braces are not nested properly.\n");
            }
        }

    } while (ch != '\n');
    
}