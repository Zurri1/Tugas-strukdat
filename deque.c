#include <stdio.h>
#include <string.h>

typedef struct {
    char data[100][50];
    int front;
    int rear;
} Deque;

void initDeque(Deque *d) {
    d->front = 0;
    d->rear = -1;
}

void pushFront(Deque *d, char *task) {
    if (d->rear < 99) {
        d->rear++;
        for (int i = d->rear; i > d->front; i--) {
            strcpy(d->data[i], d->data[i - 1]);
        }
        strcpy(d->data[d->front], task);
    }
}

void pushBack(Deque *d, char *task) {
    if (d->rear < 99) {
        d->rear++;
        strcpy(d->data[d->rear], task);
    }
}

char* popFront(Deque *d) {
    if (d->front <= d->rear) {
        char *task = d->data[d->front];
        for (int i = d->front; i < d->rear; i++) {
            strcpy(d->data[i], d->data[i + 1]);
        }
        d->rear--;
        return task;
    }
    return NULL;
}

char* popBack(Deque *d) {
    if (d->front <= d->rear) {
        char *task = d->data[d->rear];
        d->rear--;
        return task;
    }
    return NULL;
}

int isEmptyDeque(Deque *d) {
    return d->front > d->rear;
}

void printDeque(Deque *d) {
    for (int i = d->front; i <= d->rear; i++) {
        printf("%s\n", d->data[i]);
    }
}

int main() {
    Deque q;
    initDeque(&q);

    char command[20];
    char task[50];

    while (1) {
        scanf("%s", command);

        if (strcmp(command, "ADD_URGENT") == 0) {
            scanf("%s", task);
            pushFront(&q, task);
        }
        else if (strcmp(command, "ADD_NORMAL") == 0) {
            scanf("%s", task);
            pushBack(&q, task);
        }
        else if (strcmp(command, "RUN") == 0) {
            popFront(&q);
        }
        else if (strcmp(command, "DROP") == 0) {
            popBack(&q);
        }
        else if (strcmp(command, "LIST") == 0) {
            printDeque(&q);
        }
    }
}