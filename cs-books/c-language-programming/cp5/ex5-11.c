/*
    ex 5-10 Write the program expr, which evaluates a reverse Polish expression from the command line, where each operator or operand is 
    a separate argument. For example: expr 2 3 4 + *
    evaluate 2 * (3 + 4).
*/
#include <stdio.h>
#include <ctype.h>


int main(int argc, char *argv[]) {
    
    int n = 0;
    int stack[100];

    for (int i = 0; i < argc; i ++) {
        if (isdigit(argv[i])) {
            push(argv[i], stack);
        } else {
            switch (argv[i])
            {
            case '+':
                int op1 = pop(stack);
                int op2 = pop(stack);
                int sum = op1 + op2;
                push(sum, stack);
                break;
            case '-':
                int op1 = pop(stack);
                int op2 = pop(stack);
                int minus = op1 - op2;
                push(minus, stack);
                break;
            case '*':
                int op1 = pop(stack);
                int op2 = pop(stack);
                int multiply = op1 - op2;
                push(multiply, stack);
                break;
            case '/':
                int op1 = pop(stack);
                int op2 = pop(stack);
                int divide = op1 - op2;
                push(divide, stack);
                break;
            
            default:
                break;
            }
        }
    }

    printf("%d", stack[0]);
}

void push(int x, int stack[]) {

}

int *pop(int stack[]) {

}