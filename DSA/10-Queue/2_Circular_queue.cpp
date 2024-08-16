#include<bits/stdc++.h>

struct circularQueue{
  int f,r,size, *arr;
};
int Isempty(struct circularQueue *q){
  if(q->f == q->r) return 0;
  return 1;
}
int IsFull(struct circularQueue *q){
  if(((q->r+1) % q->size) == q->f) return 0;
  return 1;
}
  void Enqueue(struct circularQueue *q, int val){
    if(!IsFull(q)) printf("Queue is Full.\n");
    else{
      q->arr[q->r] = val;
      q->r = (q->r+1)%q->size; // move front one step ahead;
      printf("%d has been added index : %d\n",val,q->r);
    }
  }
  int Dequeue(struct circularQueue *q){
    if(!Isempty(q)) printf("Queue is Empty.\n");
    else{
      int val = -1;
      val = q->arr[q->f];
      q->f = ( q->f+1 ) % q->size; // move front one step ahead;
      printf("%d has been removed index : %d\n",val,q->f);
      return val;
    }
  }
int main(){
  struct circularQueue *q;
  q->size = 4;
  q->f = q->r = 0;     
  // printf("%d\t",q->size); // This commented two code is for  checking the size;
  q->arr = (int*)malloc(++q->size * sizeof(int)); // ++q->size is for size+1 (i.e. size = 4, ++q it will be 5)
  //Otherwise size wil be size-1 cause q started from 0 so size stated from 1;
  // printf("%d\n",q->size);
//! ALL THOUGH THIS IS NOT THE OPTIMAL WAY;
//! HERE THE SOLUTION:
    //All will be same jut the q.arr will be change;
    q->arr = new int(q->size * sizeof(int));// c++ way;
    q->arr = (int*) malloc (q->size * sizeof(int));//C way;

  //Enqueue
  Enqueue(q,50);
  Enqueue(q,60);
  Enqueue(q,70);
  Enqueue(q,80);


  // Dequeue
  Dequeue(q);
  Dequeue(q);
  Dequeue(q);
  Dequeue(q);
  Dequeue(q);

return 0;
}