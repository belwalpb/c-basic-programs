#include<stdio.h>


struct node   
{  
    int data;   
    struct node *next;  
};

struct node *head;

void insert(int element) {

    struct node *newNode = (struct node *) malloc(sizeof(struct node *));
    newNode->data= element;
    if(head== NULL) {
        head= newNode;
    }
    else {
        struct node *temp= head;
        while(temp->next != NULL) {
            temp= temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtBeginning(int element) {

    struct node *newNode = (struct node *) malloc(sizeof(struct node *));
    newNode->data= element;

    newNode->next= head;

    head= newNode;

}

void insertAtPos(int element, int position) {

    struct node *newNode = (struct node *) malloc(sizeof(struct node *));
    newNode->data= element;
    if(position == 0) {
        newNode->next= head;
        head= newNode;
    }
    else {
        int currentPos= 0;
        struct node *temp= head;
        while(currentPos != position-1) {
                temp= temp->next;
        }
        newNode->next= temp->next;
        temp->next= newNode;
    }

}

int size() {

    if(head == NULL) {
        return 0;
    }

    struct node *temp= head;
    int count = 1;

    while(temp->next != NULL) {
        temp= temp->next;
        count++;
    }

    return count;

}

int delete() {
    if(head == NULL) {
        printf("Linked List is already empty");
        return -1;
    }
    if(head->next == NULL) {
        int element = head->data;
        free(head);
        head = NULL;
        return element;
    }
    else {
        struct node *temp= head;
        while(temp->next->next != NULL) {
            temp= temp->next;
        }
        int element = temp->next->data;
        free(temp->next);
        temp->next= NULL;
        return element;
    }
}

int deleteAtBeginning() {
    if(head == NULL) {
        printf("Linked List is already empty");
        return -1;
    }
    else {
        int element= head->data;
        struct node *current= head;
        head = head->next;
        free(current);
        return element;
    }
}

int deleteAtPos(int position) {
    if(head == NULL) {
        printf("Linked List is already empty");
        return -1;
    }

    if(position == 0) {
        return deleteAtBeginning();
    }

    int currentPos=0;
    struct node *current = head;

    while(currentPos != position -1) {
        current = current->next;
        currentPos++;
    }

    struct node *temp= current->next;
    int element = temp->data;
    current->next= temp->next; // or current->next->next;
    free(temp);
    return element;

}


void main() {

}
