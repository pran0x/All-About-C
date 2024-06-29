#include<stdio.h>
#include<stdlib.h>

struct linked{
    int data;
    struct linked *next;
};

int display(struct linked *ptr){ //Pointing an node 
    printf("Previewing Data: \n");
    while( ptr != NULL){
        printf("Element  is : %d\n");
        ptr = ptr->next;
    }
}
int main(){
    struct linked *Head;
    struct linked *second;
    struct linked *Third;
    struct linked *Fourth;
    //making Extra int size in heap;
    Head = (struct linked*)malloc(sizeof(struct linked));
    second = (struct linked*)malloc(sizeof(struct linked));
    Third = (struct linked*)malloc(sizeof(struct linked));
    Fourth = (struct linked*)malloc(sizeof(struct linked));
    //declaring data;
        Head->data = 20;
        Head->next = second;

        second->data = 30;
        second->next = Third;

        Third->data = 40;
        Third->next = Fourth;

        Fourth->data = 50;
        Fourth->next = NULL;

//Preview Data;
    display(Head);
    return 0;
}