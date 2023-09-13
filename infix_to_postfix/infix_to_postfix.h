#ifndef INFIX_TO_POSTFIX_H
#define INFIX_TO_POSTFIX_H

int precedence(char operator);
int isOperand(char c);
char* infixToPostfix(char * infix);


#endif