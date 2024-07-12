#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
int peek_op(struct stack *sp,int i){ //For Showing Every element of the stack;
    if((sp->top-i+1) < 0){
        printf("Invalid.\n");
        return 0;
    }
    else return (sp->arr[sp->top-i+1]);
}
int isFull(struct stack *sp){
    if(sp->top == sp->size-1) return true;
    else return false;
}
int isEmpty(struct stack *sp){
    if( sp->top == -1) return true;
    else return false;
}
int push(struct stack *sp, int val){
    if(isFull(sp) == true) return true;
    else{
        sp->top++;
        sp->arr[sp->top] = val;
    } 
}
int pop(struct stack *sp){
    if(isEmpty(sp) == true) return true;
    else{
        sp->top--;
    }
}
int main(){
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr =(int*)malloc(sizeof(int));

    push(sp, 20);// 0 top-> 0 i = 5
    push(sp, 25);// 1 top-> 1 i = 4 
    push(sp, 30);// 2 top-> 2 i = 3
    push(sp, 40);// 3 top-> 3 i = 2
    push(sp, 50);// 4 top-> 4 i = 1
    
    // pop(sp);
    // pop(sp);
    // pop(sp);
    

    for(int j = 1; j<=sp->top+1; j++){
        printf("Element at %d index is: %d\n",j,peek_op(sp,j));
    }
    return 0;
}