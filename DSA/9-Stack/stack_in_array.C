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
    // else printf("Stack is not empty.\n");
    return 0;
}

int is_full(struct stack_in_array *ptr){
    if(ptr->top == ptr->size-1) return 1;
    // else printf("Stack is not full.\n");
    return 0;
}

int display(struct stack_in_array *ptr){
    if(is_empty(ptr) == true) printf("Stack is Empty.\n");
    else{  
    int i = 0;
    while(i != ptr->size){
        printf("stack index is: %d\t Element is: %d\n",i,ptr->arr[i]);
        i++;
        }
    }
}

struct stack_in_array* push_sp(struct stack_in_array *ptr,int value){
    if(is_full(ptr) == false){
        // printf("Pushing in element's...\n");
        ptr->top++;
        ptr->arr[ptr->top] = value;
        printf("%d has been push in at index %d.\n",value,ptr->top);
    }
    else printf("Stack Overflow\n");
}

struct stack_in_array* pop_sp(struct stack_in_array *ptr){
    if(is_empty(ptr) == false){
        // printf("Popping out element's...\n");
        int value = ptr->arr[ptr->top];
        printf("%d has been pop Out at index %d.\n",value,ptr->top);
        ptr->top--;
    }
    else printf("Stack underflow.\n"); 
}

int main(){
    struct stack_in_array *stack = (struct stack_in_array*)malloc(sizeof(struct stack_in_array));
        stack->size = 5; // define size of the stack;
        stack->top = -1; // define elements in stack;
        stack->arr = (int*)malloc(sizeof(int)); // Dynamically created an array into Heap;
    //!push an element manually;
    //     stack->arr[0] =  10;
    //     stack->top++; 
    //!Check stack is empty;
    //     if(is_empty(stack) == true ) printf("Stack is Empty\n"); //true means 1; false means 0;
    //     else printf("Stack is not Empty\n");
    //!Check stack is full;
    //     if(is_full(stack) == true ) printf("Stack is full\n");
    //     else printf("Stack is Not full\n");

    //push_sp function;
        push_sp(stack,20);
        push_sp(stack,30);
        push_sp(stack,40);
        push_sp(stack,50);
        push_sp(stack,60);
        push_sp(stack,70);
        push_sp(stack,80);
        printf("\n\n");
        display(stack);
        printf("\n\n");
    //pop_sp function;
        pop_sp(stack);
        pop_sp(stack);
        pop_sp(stack);
        pop_sp(stack);
        pop_sp(stack);
        pop_sp(stack);
        pop_sp(stack);
        printf("\n\n");
        display(stack);
    return 0;
}

