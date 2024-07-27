#include<stdio.h>
#include<stdlib.h>
struct node{
    int size;
    int top;
    char *arr;
};
//Empty function to check the stack is empty or not.
int isEmpty(struct node *ptr){
    if(ptr->top == -1) return 1;
    else return 0;
}
//Full function to check the stack is full or not.
int isFull(struct node* ptr){
    if( ptr->top == ptr->size - 1) return 1;
    else return 0;
}
//A push function to add element into stack.
void push(struct node* ptr,char val){
    if(isFull(ptr) == 0){
    ptr->top++;
    ptr->arr[ptr->top] = val;
    }
    else printf("Stack Full.\n");
}
//Pop out or delete from a stack.
char pop(struct node* ptr){
    if(isEmpty(ptr) == 0){
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    else printf("Stack Empty.\n");
    return -1;
}

int parenthesisMatch(char *exp){
    struct node* sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sizeof(char));

    for(int i= 0; exp[i] != '\0'; i++){
        if(exp[i] == '('){
            push(sp,'(');
        }
        else if(exp[i] ==')'){
            if(isEmpty(sp) != 1);
            pop(sp);
        }
    }
    return 0;
}
int main(){
char *exp = "(8*(9+5)";
if(parenthesisMatch(exp) == 0 ){
    printf("Parenthesis Matching.\n");
}

else printf("Parenthesis Not Matching.\n");
return 0;
}