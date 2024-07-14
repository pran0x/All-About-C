#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* top = NULL;

//Checking stack is full or not;
int isFull(struct node* top){
    struct node *n =(struct node*)malloc(sizeof(struct node));
    if(n == NULL) return true;
}
//checking stack is empty or not;
int isEmpty(struct node* top){
    if(top == NULL) return true;
}
//Pushing or adding elements into stack;
struct node* push(struct node* ptr, int element){
    if(isFull(ptr) == true) printf("Stack overflow.\n");
    else{
        struct node* n = (struct node*)malloc(sizeof(struct node));
        n->data = element;
        n->next = ptr;
        ptr = n;
        printf("Element has been added: %d\n",n->data);
    }
    return ptr;
}
//pop out element from stack;
void pop(struct node* ptr){
    if(isEmpty(ptr)== true) printf("Stack Underflow.\n");
    else{
        struct node* n = ptr;
        top = n->next;
        int val = n->data;
        printf("%d has been pop out.\n",val);
        free(n);
    }
}
//Finding element at specific position;
int peek_preview(int pos){
    struct node* ptr = top;
    for(int i = 1; i< pos && ptr != NULL; i++){
        ptr = ptr->next;
    }
    if(ptr != NULL) printf("Element at %d is : %d\n",pos,ptr->data);
    else printf("Invalid.\n");
}
int peek(struct node* pt){
    struct node* ptr = pt;
    for(;ptr->next != NULL;){
        ptr = ptr->next;
    }
    return ptr->data;
}

//Stack top elements;
void top_el( struct node* ptr){
    printf("Top element in stack is: %d\n",ptr->data);
    }
//Stack bottom elements;
void bot_el(struct node* ptr){
    printf("Bottom element in stack is: %d\n",peek(ptr));
}
//Displaying all elements in stack;
 void display( struct node *top){
    while( top != NULL){
        printf("Element is : %d\n",top->data);
        top = top->next;
    }
 }
int main(){
    //Adding elements in top stack;
    top = push(top, 15);
    top = push(top, 10);
    top = push(top, 5);
    //showing position element into a stack;
    peek_preview(3);
    top_el(top); //Top element of stack;
    bot_el(top); //Bottom element of stack;
    //popping out element into a stack;
    pop(top);
    pop(top);
    pop(top);
    pop(top);
    pop(top);
    pop(top);
    pop(top);
    display(top);

return 0;
}