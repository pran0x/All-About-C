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

struct node* at_the_mid(struct node *Head,int element,int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = Head;
int i = 0;
while( i != element-1 ){
    p = p->next;
    i++;
}
ptr->data = data;
ptr->next = p->next;
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
preview(head);
head = at_the_mid(head,2,60);
preview(head);
return 0;
}