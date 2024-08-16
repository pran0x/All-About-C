#include<stdio.h>
#include<stdlib.h>
struct Queue{
  int q,r,size, *arr;
};
int IsFull(struct Queue *q){
  if(q->r == q->size) return 0;
  return 1;
}
int IsEmpty(struct Queue *q){
  if(q->r == q->q) return 0;
  return 1;
}
<<<<<<< HEAD
//Array Traversal;
void TraversalQueue(struct Queue *q){
  printf("Queue list is : ");
  for(int i = 0; i <= q->r; i++){
    printf("%d\t",q->arr[i]);
  }
  printf("\n");
}
=======
>>>>>>> 041f2f05b90ef1eedb9d94e3f8b5325b120d96a4
void Enqueue(struct Queue *q, int val){
  if(!IsFull(q)) printf("This Queue is Full.\n");
  else{
    q->r++; // r = -1; r++ = 0; 
    q->arr[q->r] = val; 
    printf("%d has been added to the Queue Index : %d\n",val,q->r);
  }
}
void Dequeue(struct Queue *q){
  if(!IsEmpty(q)) printf("This Queue is Empty.\n");
  else{
    int a = -1;
    q->q++;
    a = q->arr[q->q];
    printf("%d has been removed from the Queue Index : %d\n",a,q->q);
  }
}
int main(){
  struct Queue q;
  q.size = 10;
  q.q = q.r = -1;
  q.arr = (int*)malloc(q.size * sizeof(int));
  //Enqueue few elements;
  Enqueue(&q,20);
  Enqueue(&q,30);
  Enqueue(&q,40);
  Enqueue(&q,50);
TraversalQueue(&q);
  //Dequeue Few Elements;
  Dequeue(&q);//20 will be removed;
  Dequeue(&q);//30 will be removed;
  TraversalQueue(&q);
return 0;
}