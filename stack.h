#ifndef STACK_H
#define STACK_H

#define SIZE 10
struct stack
{
    int top;
    int items[SIZE];
};
typedef struct stack st;

void createStack(st *s);
int isFull(st *s);
int isEmpty(st *s);
void push(st *s,int data);
int pop(st *s);
void printStack(st *s);

#endif