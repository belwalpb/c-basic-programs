#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;


void insertion_rear(int element) {
    if (rear == MAX_SIZE - 1) {
        printf("Overflow From Rear.");
        return;
    }
    rear++;
    queue[rear] = element;
    if (front == -1) {
        front = 0;
    }
}

void insertion_front(int element) {
    if(front == 0) {
        printf("Overflow From Front.");
        return;
    }
    front--;
    queue[front]=element;
    if(rear == -1) {
        rear=0;
    }
}

int deletion_front() {
    if (front == -1 || front > rear) {
        printf("Queue is empty");
        return -1;
    }
    int element = queue[front];
    front++;
    return element;
}

int deletion_rear() {
    if (front == -1 || front > rear) {
        printf("Queue is empty");
        return -1;
    }
    int element= queue[rear];
    rear--;
    return element;
}



int main() {
    insertion_front(3);
    insertion_rear(4);
    int item= deletion_front();
    printf("Deleted Item from front: %d", item);
    int item2= deletion_rear();
    printf("Deleted Item from Rear: %d", item2);
}
