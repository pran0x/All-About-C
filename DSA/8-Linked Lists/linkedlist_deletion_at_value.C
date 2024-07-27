#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* preview(struct node *ptr){
    while( ptr != NULL){
        printf("%d\n",ptr->data);
        ptr =  ptr->next;
    }
    return ptr;
}

struct node* at_value(struct node *head,int value){
    struct node *q = head;
    struct node *ptr = q->next;
    while(ptr->data != value && ptr->next != NULL){
        q = q->next;
        ptr = ptr->next;
    }
    if( ptr->data == value){
        q->next = ptr->next;
        free(ptr);
        printf("after Deletion:\n");
    }
    else printf("NO Elements Found!\nReturning the Linked List.\n");
    return head;
}
int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));

//Define data;
    head->data = 6;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 13;
    third->next = fourth;

    fourth->data = 15;
    fourth->next = NULL;
    printf("befor Deletion:\n");
    preview(head);
    head = at_value(head,11);
    preview(head);
    return 0;
}