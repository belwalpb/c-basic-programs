#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

/* Check if the stack is empty */
int isempty(){
   if(top == -1)
      return 1;
   else
      return 0;
}

/* Check if the stack is full */
int isfull(){
   if(top == SIZE - 1)
      return 1;
   else
      return 0;
}

/* Function to return the topmost element in the stack without deleting it */
int peek(){
    if(top == -1) {
        printf("Stack is empty. Underflow\n");
        return -1;
    }
   return stack[top];
}

/* Function to return the topmost element in the stack with deleting it */
int pop(){
    if(top == -1) {
        printf("Stack is empty. Underflow\n");
        return -1;
    }
   return stack[top--];
}

/* Function to insert into the stack */
void push(int data){
   if(top == SIZE - 1) {
        printf("Stack is Full. Overflow.\n");
   }
   stack[++top]= data;
}

void print() {
    if(top == -1) {
        printf("Stack is empty.\n");
    }
    else {
        int i;
        for(i=0;i<=top;i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

/* Main function */
int main(){
   push(44);
   push(10);
   push(62);
   push(123);
   push(15);
   push(20);
   int lastElement = pop();
   printf("Last Element is %d\n", lastElement);
   print();
}
