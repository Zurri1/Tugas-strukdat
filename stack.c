#include <stdio.h>
#include <string.h>

typedef struct {
    char data[100];
    int top;
} Stack;

void topStack(Stack *s) {
    s->top = -1;
}

void push(Stack *s, char x) {
    if (s->top < 99) {
        s->top++;
        s->data[s->top] = x;
    }
}

char pop(Stack *s) {
    if (s->top >= 0) {
        char x = s->data[s->top];
        s->top--;
        return x;
    }
    return '\0'; 
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void printStack(Stack *s) {
    for (int i = 0; i <= s->top; i++) {
        printf("%c", s->data[i]);
    }
    printf("\n");
}

int main() {
    Stack s;
    topStack(&s);

    char command[20];
    char y;

    while (1) {
        scanf("%s", command);

        if (strcmp(command, "WRITE") == 0) {
            scanf(" %c", &y);
            push(&s, y);
        }
        else if (strcmp(command, "UNDO") == 0) {
            pop(&s);
        }
        else if (strcmp(command, "PRINT") == 0) {
            printStack(&s);
        }
    }
}