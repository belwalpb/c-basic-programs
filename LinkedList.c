#include<stdio.h>  

// Structure to store each element of linked list.
struct node {
    int data;
    struct node *next;
}

struct node *head;

// Insert or insert at last.
void insert(int element) {

    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=element;
    ptr->next=NULL;

    if(head == NULL) {
        head=ptr;
    }
    else {
        struct node *temp= head;
        while(temp->next != NULL) {
            temp= temp->next;
        }
        // now temp will contain last node.
        temp->next=ptr;
    }

}


void main() {


}