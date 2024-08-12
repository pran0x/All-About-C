#include<stdio.h>
#include<stdlib.h>
struct node{
    int size;
    int top;
    char *arr;
    char pop_ch;
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
    printf("pushing...  '%c'\n",val);
    }
    else printf("Stack Full.\n");
}
//Pop out or delete from a stack.
char pop(struct node* ptr){
    if(isEmpty(ptr) == 0){
        char val = ptr->arr[ptr->top];
        ptr->top--;
        printf("poping...   '%c'\n",val);
        return val;
    }
    else{
        printf("Stack Empty.\n");
    return -1;
    }
}
char match(char a, char b){
    if(a == '{' && b == '}') return 1;
    if(a == '(' && b == ')') return 1;
    if(a == '[' && b == ']') return 1;
    return 0;
}
int parenthesisMatch(char *exp){
    struct node* sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size* sizeof(char));

    for(int i= 0; exp[i] != '\0'; i++){
        if(exp[i] == '(' || exp[i] ==  '{' || exp[i] ==  '[' ){
            push(sp,exp[i]);
        }
        else if(exp[i] == ')' || exp[i] ==  '}' ||  exp[i] == ']'){
            if(isEmpty(sp)) return 0;
            sp->pop_ch = pop(sp);
            if(!match(sp->pop_ch, exp[i])){
                return 0;
            }
        }
    }
    if(isEmpty(sp) == 1) return 1;
    else return 0;
}
int main(){
char *exp = "(8*6) - {8+ (5+6)* 2} - [20* {30 - 20+(4*5)}]";
if(parenthesisMatch(exp) == 1){
    printf("Parenthesis Matching.\n");
}

else printf("Parenthesis Not Matching.\n");
return 0;
}