#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "infix_to_postfix.h"
#include "../stack/stack.h"

//return postfix expression
char* infixToPostfix(char * infix){
    int j = 0;
    int len = strlen(infix);
    char* postfix = (char*)malloc(sizeof(char)*len);
    stack* s = createStack();

    for(int i=0;i<len;i++){
        if (infix[i] == ' ' || infix[i] == '\t')
            continue;

        if(isalnum(infix[i])){
            postfix[j++] = infix[i];
        }

        else if(infix[i]=='('){
            push(s,'(');
        }

        else if(infix[i]==')'){
            while(!isEmpty(s) && peek(s)!='('){
                postfix[j++] = pop(s);
            }
            if(!isEmpty(s) && peek(s) !='(')
            return "Invalid expression";
            else
                pop(s);            
        }

        else if(isOperator(infix[i])){
            while(!isEmpty && precedence(peek(s))>=precedence(infix[i]))
            postfix[j++] =  pop(s);
            push(s,infix[i]);
        }
    }

    while(!isEmpty(s)){
        if(peek(s)== '('){
            return "Invalid Expression";
        }
        postfix[j++] = pop(s);
    }

    postfix[j] = '\0';
    return postfix;
}

int precedence(char operator)
{
    switch (operator) {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return -1;
    }
}
  
// Function to check if the scanned character 
// is an operator
int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/'
            || ch == '^');
}
