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

struct node* delete(struct node *head){
    struct node *ptr = head;
    head = head->next;
    free(ptr);
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
    printf("after Deletion:\n");
    head = delete(head);
    preview(head);
    return 0;
}