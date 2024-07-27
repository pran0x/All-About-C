#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node* preview_in_order(struct node* head){
    struct node* p = head;
    while( p != NULL){
        printf("Element is: %d\n",p->data);
        p = p->next;
    }
}

struct node* reverse_in_order(struct node* head){
    struct node* p = head;
    while(p != NULL){
        printf("Element is: %d\n",p->data);
        p = p->prev;
    }
}
int main(){
    struct node* N1 = (struct node*)malloc(sizeof(struct node));
    struct node* N2 = (struct node*)malloc(sizeof(struct node));
    struct node* N3 = (struct node*)malloc(sizeof(struct node));
    struct node* N4 = (struct node*)malloc(sizeof(struct node));


    //Data  initializing;
        N1->prev = NULL; 
        N1->data = 15; 
        N1->next = N2;
        
        N2->prev = N1; 
        N2->data = 20; 
        N2->next = N3;

        N3->prev = N2; 
        N3->data = 25; 
        N3->next = N4; 
       
        N4->prev = N3;  
        N4->data = 30; 
        N4->next = NULL;
    
    printf("Elements in Ascending order: \n");
    preview_in_order(N1);
    printf("Elements in Descending order: \n");
    reverse_in_order(N4);

    return 0;
}