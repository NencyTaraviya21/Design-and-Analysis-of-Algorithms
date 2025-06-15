#include <stdio.h>
#include <stdlib.h>

struct queue{
    int front;
    int rear;
    int *arr;
    int size;
}*q;

void enqueue(int value){
   
    if(q->front==q->size-1){
        printf("queue is overflow\n");
    }
     if (q->front == -1)
        q->front = 0;

    q->arr[++(q->rear)]=value;
       
}

void dequeue(){
     if (q->front == -1 || q->front > q->rear) {
        printf("queue is empty\n");
        return;
    }
    q->arr[q->front];
    (q->front)++;

    if(q->front > q->rear){
        q->front = q->rear-1;
    }
}
void displayQueue(struct queue* q) {
    if (q->front == -1 || q->front > q->rear) {
        printf("queue is empty\n");
        return;
    }
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d\n", q->arr[i]);
    }
}

void main(){
    q=(struct queue*)malloc(sizeof(struct queue));
    q->front = -1;
    q->rear = -1;
    q->size = 5;
    q->arr=(int*)malloc(q->size*sizeof(int));
    enqueue(43);
    enqueue(23);
    enqueue(33);
    displayQueue(q);

    dequeue();
    printf("\n");
    displayQueue(q);

}