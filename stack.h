#include <stdio.h>
#include <stdlib.h>

typedef struct _Stack Stack;

//Cria uma pilha vazia com no maximo 250 itens
Stack* create_stack();
//coloca um item na pilha
void push(Stack *stack, int item);
//tira o item da pilha se vazia returna -987984
int pop(Stack *stack);
//da uma olhada no primeiro item da pilha se vazia returna -987984
int peek(Stack *stack);
// verifica se a pilha está vazia
int is_empty(Stack *stack);
