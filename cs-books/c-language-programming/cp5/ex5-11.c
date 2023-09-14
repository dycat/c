/*
    ex 5-10 Write the program expr, which evaluates a reverse Polish expression from the command line, where each operator or operand is 
    a separate argument. For example: expr 2 3 4 + *
    evaluate 2 * (3 + 4).
*/
#include <stdio.h>
#include <ctype.h>

#define MAXNUM 100

void push(int x);
int pop();
void show_stack();
int atoi(char *s);

int stack[MAXNUM];
int top;

int main(int argc, char *argv[]) {
    
    int n = 0;
    int op1, op2;

    for (int i = 1; i < argc; i++) {
        printf("The arg is %c\n", *argv[i]);
        if (*argv[i] > '0' && *argv[i] <= '9') {
            push(atoi(argv[i]));
            show_stack();
        } else {
            switch (*argv[i]) {
            case '+':
                op1 = pop();
                op2 = pop();
                int sum = op1 + op2;
                printf("the sum: %d, op1: %d, op2: %d", sum, op1, op2);
                
                push(sum);
                break;
            case '-':
                op1 = pop();
                op2 = pop();
                int minus = op1 - op2;
                push(minus);
                break;
            case '*':
                op1 = pop();
                op2 = pop();
                int multiply = op1 * op2;
                push(multiply);
                break;
            case '/':
                op1 = pop();
                op2 = pop();
                int divide = op1 / op2;
                push(divide);
                break;
            default:
                break;
            }
        }
    }

    printf("%d", stack[0]);
}

void push(int x) {
    if (top >= MAXNUM) {
        return ;
    }
    stack[top] = x;
    top += 1;
    

}

int pop() {
    show_stack();
    int return_value = stack[top];
    top -= 1;
    
    return return_value; 
}

void show_stack() {
    printf("The stack element is:");
    for (int i = 0; i <= top; i++) {
        printf("%d\t", stack[i]);
    }
    printf("\n");
}

int atoi(char *s) {
    int i, n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}
