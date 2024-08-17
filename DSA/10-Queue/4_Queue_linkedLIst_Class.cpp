#include<bits/stdc++.h>
using namespace std;

class Node{//Created a Class Node same as Struct;
public:
  int data;
  Node* next;
};
  Node *f; // Global uses and avoid return type;
  Node *r;

class Queue{ // specified class for Queue for code reuse;
  public:
  void Enqueue(int val);
  void Dequeue();
  void Display(Node* ptr);
};
int main(){
  Queue q;
//Enqueue;
  q.Enqueue(20);
  q.Enqueue(30);
  q.Enqueue(40);
  q.Display(f);
  //Dequeue;
  q.Dequeue();
  q.Dequeue();
  q.Display(f);
return 0;
}

void Queue::Enqueue(int val){
  Node* n = (class Node*)malloc(sizeof(class Node));
  if( n == NULL) cout<<"Queue Is Full.\n";
  else{
      n->data = val;
      n->next = NULL;
  if(f == NULL) f = r = n;
  else{
    r->next = n;
    r = n;
  }
  cout<<val<<"  new Node has been added.\n";  
  }
}

void Queue::Display(Node* ptr){
    cout<<"Total Queue is : ";
  while(ptr != NULL){
    cout<<"  "<<ptr->data;
    ptr = ptr->next;
  }
}

void Queue::Dequeue(){
  if(f == NULL) cout<<"Queue is Empty.\n";
  else{
    int val = -1;
    Node *ptr = f;
    f = f->next;
    val = ptr->data;
    free(ptr);
    cout<<"\n"<<val<<"  has been Removed.\n";
  }
}
