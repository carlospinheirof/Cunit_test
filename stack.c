
#include "stack.h"
struct _Stack 
{
	int index;
	int st[250];
};
int is_empty(Stack *stack)
{
	return(stack == NULL || stack->index < 0);
}

Stack* create_stack()
{
	Stack *newStack = (Stack*) malloc(sizeof(Stack));
	newStack->index = -1;
	return newStack;
}
void push(Stack *stack, int item)
{
	if(stack->index == 249)
	{
		printf("It's full,sorry\n");
		return;
	}	
	stack->st[++stack->index] = item;
	return;
}

int peek(Stack *stack)
{
	if(!is_empty(stack)) return stack->st[stack->index];
	else
	{
		printf("está vazia\n");
		return -1;
	}
}
int pop(Stack *stack)
{
	if(!is_empty(stack)) return stack->st[stack->index--];
	else
	{
		printf("está vazia\n");
		return -1;
	}
}