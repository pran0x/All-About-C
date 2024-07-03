#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* preview(struct node *head){
    struct node* p = head;
    do{
        printf("%d\n",p->data);
        p = p->next;
    }while ( p != head );
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
    
    printf("Elements is : \n");
    preview(head);
    return 0;
}