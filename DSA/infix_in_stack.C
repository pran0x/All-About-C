/*
--------INFIX TO POSTFIX---------
    ----In This code we learn about how to infix to postfix and function operator.
    ----First We take a @struct and call it @STACK and init here size,top ->[postion of the stack] an an character array.
    ----@isEmpty is a int function which take struct stack pointer and check the stack is EMPTY OR NOT!
    ----@StackTop is a int function which take also struct pointer and return the top element of the stack.
    ----@Void Push is for put elements into stack and it's Return Nothing.
    ----@pop function for pop out elements from the stack and take is a copy and return it.
    ----@precedence function is for given an value of the operator to check/Compare which is greater or less then, + - = 2, * / = 3 .
    ----@isNotOperator function check the element is operator or not. if yes then return 0, else 1.
    ----@InfixToPostfix function checks the array and find out the operator by help of top functions.its return only the postfix as a string.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
  int size, top;
  char *arr;
};

int isEmpty(struct stack* ptr){
  if(ptr->top == -1) return 1;
  return 0;
}

int stackTop(struct stack* ptr){
  return ptr->arr[ptr->top];
}

void push(struct stack* ptr, char val){
  ptr->top++;
  ptr->arr[ptr->top] = val;
}

int pop(struct stack* ptr){
  if( isEmpty(ptr) == 1 ) return 0;
  else{
    char val = ptr->arr[ptr->top];
    ptr->top--;
  return val;
  }
}

int precedence(char ch){
  if(ch == '*' || ch == '/') return 3;
  else if(ch == '+' || ch == '-') return 2;
  else return 0;
}

int isNotOperator(char ch){
  if(ch == '+' || ch == '-'|| ch == '*' || ch == '/') return 1; //Filtering the character 
  else return 0;
}

char* infixToPostfix(char* infix){
  struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
  sp->size = 50;
  sp->top = -1;
  sp->arr = (char*) malloc(sp->size * sizeof(char));
  char * Postfix = (char *) malloc((strlen(infix) + 1) * sizeof(char));
  int i = 0; //Tracking the array of infix;
  int j = 0;//Tracking the array of postfix;
  while(infix[i] != '\0'){
    if(!isNotOperator(infix[i])){  // isNotOperator() != 1
      Postfix[j] = infix[i];
      j++;
      i++;
    }
    else{
      if(precedence(infix[i])> precedence(stackTop(sp))){
        push(sp,infix[i]);
        i++;
      }
      else{
        Postfix[j] = pop(sp);
        j++;
      }
    }
  }
  while(!isEmpty(sp)){ // isEmpty() != 1
    Postfix[j] = pop(sp);
    j++;
  }
  Postfix[j] = '\0';
  return Postfix;
}
int main(){
  //EX:1
  char *infix1 = "a-b+t/6";
  printf("Example : 1 \n");
  printf("InFix: %s\n", infix1);
  printf("PostFix: %s\n\n",infixToPostfix(infix1));

  char *infix2 = "t/6+c-d+e";
  printf("Example : 2 \n");
  printf("InFix: %s\n", infix2);
  printf("PostFix: %s\n",infixToPostfix(infix2));
return 0;
}