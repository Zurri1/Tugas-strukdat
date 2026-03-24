#include <stdio.h>
#include <string.h>

typedef struct {
    char data[100][50];
    int front;
    int rear;
} Queue;

void checkQueue(Queue *q) {
    q->front = 0;
    q->rear = -1;
}

void enqueue(Queue *q, char *nama) {
    if (q->rear < 99) {
        q->rear++;
        strcpy(q->data[q->rear], nama);
    }
}

char* dequeue(Queue *q) {
    if (q->front <= q->rear) {
        char *nama = q->data[q->front];
        q->front++;
        return nama;
    }
    return NULL;
}

int isEmptyQueue(Queue *q) {
    return q->front > q->rear;
}

void printQueue(Queue *q) {
    for (int i = q->front; i <= q->rear; i++) {
        printf("%s\n", q->data[i]);
    }
}

int main() {
    Queue q;
    checkQueue(&q);

    char command[20];
    char name[50];

    while (1) {
        scanf("%s", command);

        if (strcmp(command, "ARRIVE") == 0) {
            scanf("%s", name);
            enqueue(&q, name);
        }
        else if (strcmp(command, "NEXT") == 0) {
            dequeue(&q);
        }
        else if (strcmp(command, "LIST") == 0) {
            printQueue(&q);
        }
    }
}