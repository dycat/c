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

int stack[MAXNUM];
int top;

int main(int argc, char *argv[]) {
    
    int n = 0;
    int op1, op2;

    for (int i = 1; i < argc; i ++) {
        if (isdigit(argv[i][0])) {
            push(argv[i][0]);
        } else {
            switch (argv[i][0]) {
            case '+':
                op1 = pop();
                op2 = pop();
                int sum = op1 + op2;
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
    top += 1;
    stack[top] = x;

}

int pop() {
    if (top <= 0) {
        return -1;
    }
    int return_value = stack[top];
    top -= 1;
    return return_value; 
}
