#include<stdio.h>
#include<stdlib.h>
#include "./stack/stack.h"

int main(){
    stack *s = (stack *)malloc(sizeof(stack));
    createStack(s);
    push(s,'5');
    push(s,'2');
    push(s,'1');
    printStack(s);
}