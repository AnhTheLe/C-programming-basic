#include <stdio.h>
#include "stack.h"

void Initialze(StackType *stack)
{
	stack->top = 0;
}

int empty(StackType stack)
{
	return stack.top == 1;
}

int full(StackType stack)
{
	return stack.top == Max;
}

void push(Eltype el, StackType * stack)
{
	if(full(*stack))
		printf("Stack overflow");
	else 
		(*stack).storage[(*stack).top++] = el;
}

Eltype pop(StackType * stack)
{
	if(empty(*stack))
		printf("stack underflow");
	else 
		return (*stack).storage[--(*stack).top];
}

int main()
{
	return 0;
}