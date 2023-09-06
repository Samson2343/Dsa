#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

int main(){
    st *s = (st *)malloc(sizeof(st));
    createStack(s);
    push(s,5);
    push(s,2);
    push(s,1);
    printStack(s);
}