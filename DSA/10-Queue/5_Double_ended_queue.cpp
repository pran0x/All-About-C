#include<bits/stdc++.h>
using namespace std;

/* 
  Make a Array Queue;
  access to Remove/Add element from front an d Rare;
  Display Elements;
 */
struct node{
  int f,size, *arr;
};
int isEmpty(struct node* q){
  if( q->f == -1) return 0; //queue is Empty or Not;
  return 1;
}
int isFull(struct node* q){
  if(q->f == q->size) return 0; //Queue is Full or not;
  return 1;
}
void enqueueF(struct node *q, int val){
  if(!isFull(q)){
    cout<<"Queue is Full.\n";// Adding element into front;
  }
  else{
    q->f++;//pointing to array index;
    q->arr[q->f] = val; //set value to the array index; 
  }
  cout<<val<<" added to the Begin.\n";
}
void enqueueR(struct node *q, int val){
  if(!isFull(q)){
    cout<<"Queue is Full.\n";
  }
  else{
    q->arr[q->size - 1] = val; // set value at the last index of an array;
  }
  cout<<val<<" added to the End.\n";
}
void DequeueF(struct node* q){
  if(!isEmpty(q)) cout<<" Queue is Empty.\n";
  else{
    for (int i = 0; i < q->size; i++){
      q->arr[i] = q->arr[i+1];// shifting from index next to previous;
    }
    q->f--;//backward array index pointer;
    if(q->f == -1) cout<<"Queue is Empty.\n";
  }
}
void DequeueR(struct node* q){
  if(!isEmpty(q)) cout<<" Queue is Empty.\n";
  else{
    q->arr[q->size - 1] = 0; // Removing from last index;
  }
}
void display(struct node* ptr){
for (int i = 0; i < ptr->size; i++){
  cout<<"Queue Index "<<i<<" is "<<ptr->arr[i]<<"\n";
}
}
int main(){
  struct node* q;
  q->f = -1;
  q->size = 5;
  q->arr = (int*) malloc(q->size * sizeof(int));
  cout<<"Enqueuing Values : \n";
  enqueueF(q,300);
  enqueueF(q,400);
  enqueueF(q,500);
  enqueueF(q,700);
  enqueueF(q,800);
  display(q);
  cout<<"Dequeuing Values : \n";
  DequeueF(q);
  DequeueF(q);
  DequeueF(q);
  display(q);
  cout<<"Enqueuing Values : \n";
  enqueueF(q,1200);
  enqueueF(q,1500);
  enqueueR(q,20000);
  display(q);
return 0;
}