#include<stdio.h>
#include<stdlib.h>

struct linked{
    int data;
    struct linked *next;
};

int display(struct linked *ptr){ //Pointing an node 
    printf("Previewing Data: \n");
    while( ptr != NULL){
        printf("Element Address is : %p  Value is : %d\n",ptr,ptr->data); //Here we show ptr address cz it is the address of current Node;
        ptr = ptr->next;
    }
}
struct linked *insertion_first(struct linked *head,int data){
    struct linked *ptr = (struct linked*)malloc(sizeof(struct linked));
    ptr->next = head; 
    ptr->data = data;
    return ptr;
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
        Third->next = Fourth; // now in third is connect to fourth;

        Fourth->data = 50;
        Fourth->next = NULL;

//Preview Data;
    printf("Before insertion in second and third middle.\n");
    display(Head);

    //!Now Doing Insertion;
        struct linked *Fifth;
        Fifth =  (struct linked*)malloc(sizeof(struct linked));
        second->next = Fifth; // fifth is connect to second's next;
        Fifth->data = 60;
        Fifth->next = Third; // now fifth is connected to third;
        printf("After insertion in second and third middle.\n");
    display(Head);

    ///!INSERTION BY FUNCTION;
    printf("After Insertion first in the elements by using function: \n");
        Head = insertion_first(Head,57);
        display(Head);
    return 0;
}