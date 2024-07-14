#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* top = NULL;

int isFull(struct node* top){
    struct node *n =(struct node*)malloc(sizeof(struct node));
    if(n == NULL) return true;
}

int isEmpty(struct node* top){
    if(top == NULL) return true;
}

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
 void display( struct node *top){
    while( top != NULL){
        printf("Element is : %d\n",top->data);
        top = top->next;
    }
 }
int main(){
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);
    top = push(top, 50);
    display(top);
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