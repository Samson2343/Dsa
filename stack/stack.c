#include "stack.h"
#include<stdio.h>

//create stack
void createStack(stack *stack){
    stack->top = -1;
}

int isFull(stack *stack){
    if(stack->top==SIZE-1){
        return 1;
    }
    else 
    return 0;
}

int isEmpty(stack *stack){
    if(stack->top==-1){
        return 1;
    }
    else
    return 0;
}

//push
void push(stack *stack,int data){
    if(isFull(stack)){
        printf("STACK OVERFLOW\n");
    }
    else{
        stack->top++;
        stack->items[stack->top] = data;
    }
}

int pop(stack* stack){
    if(isEmpty( stack)){
        printf("STACK UNDERFLOW");
    }
    else{
    int data = stack->items[stack->top];
    stack->top--;
    return data;
    }   
}

void printStack(stack* stack){
    int top = stack->top;
    for(int i=top;i>=0;i--){
        printf("%d\n",stack->items[i]);
    }
}

