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
struct node* insertion_first(struct node *head, int element){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = element;
    struct node *p = head->next;
    while ( p->next != head ){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
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
    fifth->next = head;
    
    printf("Before adding elements is : \n");
    preview(head);
    printf("After Adding Elements : \n");
    head = insertion_first(head, 10);
    head = insertion_first(head, 20);
    head = insertion_first(head, 30);
    head = insertion_first(head, 40);
    head = insertion_first(head, 50);
    head = insertion_first(head, 60);
    preview(head);
    return 0;
}