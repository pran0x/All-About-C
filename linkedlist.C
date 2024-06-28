#include<stdio.h>
#include<stdlib.h>

struct Linked { //Declared a structure which has a int data variable
        int data;
        struct Linked *next; // pointer to one structure to another linkedList structure;
    };

int Linked_List_Traversal(struct Linked *ptr){ //Declared struct Linked and connect it into a pointer;
    while (ptr !=NULL){    
        printf("Element is : %d\n",ptr->data);
        ptr = ptr->next; // ptr point itself into a pointer to next;
    //? ptr-> ptr ->next    (Pointer to pointer);
    }
}
int main(){
    //pointing an new memory into (heap) and point to linked struct;
    struct Linked *Head   = (struct Linked*)malloc(sizeof(struct Linked));
    struct Linked *Second = (struct Linked*)malloc(sizeof(struct Linked));
    struct Linked *Third  = (struct Linked*)malloc(sizeof(struct Linked));

    //Declared elements in Data;
        //initializing head;
        Head->data = 45;
        Head->next = Second;
        //initializing Second;
        Second->data = 20;
        Second->next = Third;
        //initializing Third;
        Third->data = 340;
        Third->next = NULL;

    //Preview Data;
    Linked_List_Traversal(Head);
    return 0;
}
//! Time Complicity -> O(n);