#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int f,r;
  int *arr;
  int size;
};
class doubleEndedQueue{
  public:
  void EnqueueF(node *x,int val);
  void EnqueueR(node *x,int val);
  void DequeueF();
  void DequeueR();
  void Display(node *ptr);
};
int main(){
  node x;
  x.size = 10;
  x.f = x.r = -1;
  q->arr = (int*)malloc(q->size * sizeof(int));
  doubleEndedQueue q;
  q.EnqueueF(x,30);
  q.EnqueueR(x,20);
  q.Display(x);

return 0;
}

void doubleEndedQueue::EnqueueF(node *x, int val){
  if( x->f == x->size) cout<<"Queue is Full";
  else{
    x->arr[0] = val;
  }
}

void doubleEndedQueue::EnqueueR(node *x,int val){
  if( x->r == x->size) cout<<"Queue is Full.\n";
  else{
    x->arr[x->size-1];
  }
}

void doubleEndedQueue::Display(node *q)
{
  cout<<"Queue is : ";
  for (int  i = 0; i < q->r; i++)
  {
    cout<<" "<<q->arr[i];
  }
}
