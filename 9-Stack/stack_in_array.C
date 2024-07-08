#include<stdio.h>
#include<stdlib.h>

struct stack_in_array
{
    int size;
    int top;
    int *arr;
};
int is_empty(struct stack_in_array *ptr){
    if( ptr->top == -1) return 1;
}
int is_full(struct stack_in_array *ptr){
    if(ptr->top == ptr->size-1) return 1;
}
int main(){
    struct stack_in_array *stack;
        stack->size = 5; // define size of the stack;
        stack->top = -1; // define elements in stack;
        stack->arr = (int*)malloc(sizeof(int)); // Dynamically created an array into Heap;
        //pushing an element manually;
           stack->arr[0] =  10;
           stack->top++; 
    //Check stack is empty;
        if(is_empty(stack) == true ) printf("Stack is Empty\n"); //true means 1; false means 0;
        else printf("Stack is not Empty\n");
    //Check stack is full;
        if(is_full(stack) == true ) printf("Stack is full\n");
        else printf("Stack is Not full\n");
    return 0;
}