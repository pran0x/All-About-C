#include<stdio.h>
#include<stdlib.h>

//Creating a node for linked list;
struct node{
    int data;
    struct node* next;
};
//global variable, if it local then need pointer every time to point it;
struct node* top = NULL;
//Verifying stack is full or not;
int isEmpty(struct node* top){
    if(top == NULL) return 1; // true-> 1, false -> 0;
    else return 0;
}
//Verifying stack is empty or not;
int isFull(struct node* top){
    struct node *n = (struct node*)malloc (sizeof(struct node));
    if( n == NULL ) return 1;
    else return 0;
}
//Pushing element to the stack;
struct node * push(struct node* ptr, int x){
    if(isFull(ptr) == true) printf("Overflow.\n");
    else{
        struct node* n = (struct node*)malloc(sizeof(struct node));
        n->data = x;  //making a new node and set is data to x;
        n->next =  ptr; // set n next pointer to its first node/head;
        ptr = n; // ptr is set to n , that's means n will be start from the fist and then ptr;
        return ptr;
    }   
 }
 //popping element from the stack;
 void pop(struct node* ptr){
    if(isEmpty(ptr) == true) printf("Underflow.\n");
    else
    {
        struct node* n = ptr; // here, pop out node's next is NULL;
        top = ptr->next; // Now we set top is ptr->next means Null;
        int x = n->data; //save pop out nodes data into another variable;
        printf("%d has been pop out.\n",x); //printing x;
        free(n); // free memory;
    }
    

 }
 //Showing  all elements; 
 void display( struct node *top){
    while( top != NULL){
        printf("Element is : %d\n",top->data);
        top = top->next;
    }
 }
int main(){

        top = push(top, 100);
        top = push(top,200);
        top = push(top,300);
        top = push(top,400);
        top = push(top,500);
        top = push(top,700);
        top = push(top,800);
        top = push(top,900);
        top = push(top,1000);
        display(top);

        pop(top);
        pop(top);
        pop(top);
        pop(top);
        pop(top);

        display(top);

return 0;
}