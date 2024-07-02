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

struct node* at_index(struct node *head,int index){
    struct node *ptr = head; // point to fist head;
 int i = 0;
 while( i != index-1){
    ptr = ptr->next; // increments the p next to p;
    i++;
 }
    struct node* q = ptr->next;
    ptr->next = q->next;
    free(q); // free q next  ;
    return ptr;
}
int main(){
    struct node *head   = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third  = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));
    struct node *fifth  = (struct node*)malloc(sizeof(struct node));

//Define data;
    head->data = 6; // index->0
    head->next = second;

    second->data = 11; // index->1
    second->next = third;

    third->data = 13; // index->2
    third->next = fourth;

    fourth->data = 15; // index->3
    fourth->next = fifth;

    fifth->data = 20; // index->4
    fifth->next = NULL;
    
    printf("befor Deletion:\n");
    preview(head);

    printf("after Deletion at index %d:\n",2);
    head = at_index(head,2);
    preview(head);

    return 0;
}