#ifndef STACK_H
#define STACK_H

#define SIZE 10
struct stack
{
    int top;
    char items[SIZE];
};
typedef struct stack stack;

void createStack(stack * stack);
int isFull(stack *stack);
int isEmpty(stack *stack);
void push(stack *stack,char data);
char pop(stack *stack);
void printStack(stack *stack);

#endif
