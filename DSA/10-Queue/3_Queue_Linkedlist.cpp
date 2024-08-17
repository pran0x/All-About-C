#include<bits/stdc++.h>
using namespace std;

//Global for avoid Return Type;
  struct Node* f = NULL;
  struct Node* r = NULL;

struct Node{
  int data;
  struct Node* next;
};
void enqueue(int val){// Taking only value and created a new node and connect it to previous node;
  struct Node *n = (struct Node*) malloc (sizeof(struct Node));// created new node;
  if( n == NULL ) printf("Queue is Full.\n"); // checking node in Queue is full or not;
  else{
    n->data = val; // set new node data;
    n->next = NULL; // new node next point to NULL;
    if( f == NULL ){ // if front NUll then all front and rare also be Null;
      f = r = n;
    } else {
      r->next = n; //point r next to another node;
      r = n; // pointing r  point to n node;
    }
  }
}
void Dequeue(){
  int val = -1; // For storing removed data;
  struct Node* ptr = f; // storing f into a pointer;
  if( f == NULL) printf("Queue is Empty.\n");
  else{
      f = f->next; // point f to next node ;
      val = ptr->data; // store ptr data;
      printf("\n%d Has been removed.\n",val);
      free(ptr);
  }
}
void Display(struct Node* ptr){
  cout<<"Printing The Queue LinkedList : ";
  while( ptr != NULL){
    cout<<" "<<ptr->data;
    ptr = ptr->next;
  }
}
int main(){
  //Inserting Elements;
  enqueue(20);
  enqueue(40);
  enqueue(50);
  enqueue(60);
//Removed elements an showing elements;
  Display(f);
  Dequeue();
  Display(f);
  Dequeue();
  Display(f);
  Dequeue();
  Display(f);
return 0;
}