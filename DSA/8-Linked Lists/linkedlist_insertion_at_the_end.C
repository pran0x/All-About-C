#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* preview(struct node *ptr){
    while( ptr != NULL){
    printf("Element is : %d\n",ptr->data);
    ptr = ptr->next;
    }
    return ptr;
}
struct node* at_the_end(struct node *Head, int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = Head;
int i = 0;
while( p->next != NULL ){
    p = p->next;
    i++;
} 
ptr->data = data;
ptr->next = NULL;
p->next = ptr;
    return Head;
}
int main(){
    struct node *head   = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third  = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));

    head->data = 22;
    head->next = second;

    second->data = 28;
    second->next = third;

    third->data = 35;
    third->next = fourth;

    fourth->data = 43;
    fourth->next = NULL;
    
printf("Before At the end:\n");
preview(head);
printf("After At the end:\n");
head = at_the_end(head,60);
preview(head);
return 0;
}