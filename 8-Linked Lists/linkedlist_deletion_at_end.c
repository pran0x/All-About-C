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

struct node* end(struct node *ptr){
    struct node *p = ptr; // point to fist head;
    struct node *q = ptr->next; // point to first heads next;
 int i = 0;
 while(q->next != NULL){ // head->next next == Null terminate this loop;
    p = p->next; // increments the p next to p;
    q = q->next;// increments the q next  to q;
    i++;
 }
    p->next = NULL; // make p next to null;
    free(q); // free q next  ;
    return ptr;
}
int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));
    struct node *fifth = (struct node*)malloc(sizeof(struct node));

//Define data;
    head->data = 6;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 13;
    third->next = fourth;

    fourth->data = 15;
    fourth->next = fifth;

    fifth->data = 20;
    fifth->next = NULL;
    
    printf("befor Deletion:\n");
    preview(head);
    printf("after Deletion:\n");
    head = end(head);
    preview(head);
    return 0;
}