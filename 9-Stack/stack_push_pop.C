#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int full(struct stack *ptr){
    if( ptr->top == ptr->size-1) return true;
    return false;
}
int empty(struct stack *ptr){
    if(ptr->top == -1) return true;
    return false;
}
void push_in(struct stack *ptr, int val){
    if(full(ptr) == true){
        printf("Stack is full.\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        printf("%d has been added into stack index %d.\n",val,ptr->top);
    }
}

void pop_out(struct stack *ptr){
    if(empty(ptr) == true){
        printf("Stack is Empty.\n");
    }
    else{
        int val = ptr->arr[ptr->top];
        printf("%d has been removed from the stack index %d\n",val,ptr->top);
        ptr->top--;
    }
}
int main(){
    struct stack *sp= (struct stack*)malloc(sizeof(struct stack));
    sp->size = 3;
    sp->top = -1;
    sp->arr = (int*)malloc(sizeof(int));

    //pushing
        push_in(sp, 20);
        push_in(sp, 15);
        push_in(sp, 30);
        push_in(sp, 30);
        push_in(sp, 30);
        
    printf("\n\n");
    //popping
        pop_out(sp);
        pop_out(sp);
        pop_out(sp);
        pop_out(sp);
        pop_out(sp);
    return 0;
}