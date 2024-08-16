#include<bits/stdc++.h>
struct queue{
  int f,size, *arr;
};
//Queue is Full or not;
int isFull(struct queue *q){
  if(q->f == q->size) return 0;
  return 1;
}
//Queue is Empty or not;
int isEmpty(struct queue *q){
  if(q->f == -1) return 0;
  return 1;
}
//Displaying all elements of queue;
void TraversalQueue(struct queue *q){
  if(!isEmpty(q)) printf("Queue is Empty.\n");
  else{
    printf("Queue list is : ");
    for(int i = 0; i <= q->f; i++){
      printf("%d\t",q->arr[i]);
    }
    printf("\n");
  }
}
//Inserting Elements to the queue;
void Enqueue(struct queue *q, int val){
  if(!isFull(q)) printf("Queue overflow.\n");
  else{
    q->f++;
    q->arr[q->f] = val;
    printf("Queue has been added: %d at Index : %d\n",val,q->f);
  }
}
//Removing Elements from the queue;
void Dequeue(struct queue *q){
  if(!isEmpty(q)) printf("Queue underflow.\n");
  else{
    int val = q->arr[0];//storing current arr[index = 0] data;
    for(int i = 0; i < q->f; i++){ 
      q->arr[i] = q->arr[i+1]; // shifting data to next one to previous one index;
    }
    printf("Queue has been removed: %d  from Index : %d\n",val,0);
    q->f--;/// f-- for one element has been shifted to the previous index;
    if(q->f == -1) printf("Queue is Empty.\n");
    else printf("Total Queue Left : %d\n",q->f+1);
  }
}
int main(){
  struct queue *q;
  q->size = 10;
  q->f = -1;
  q->arr = (int*)malloc(q->size * sizeof(int));
  //Enqueue;
  Enqueue(q,5);
  Enqueue(q,10);
  Enqueue(q,15);
  TraversalQueue(q);
  //Dequeue;
    Dequeue(q);
    Dequeue(q);
    Dequeue(q);

return 0;
}