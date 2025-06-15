#include <stdio.h>
#include <stdlib.h>

struct stack {
    int top;
    int *arr;
    int size;
} *s;

void push(int value) {
    if (s->top >= s->size - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->arr[++(s->top)] = value;
}

void pop(){
    if (s->top == -1) {
        printf("Stack empty\n");
        return;
    }
    s->arr[(s->top)--];
}

void displayStack(struct stack* s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = 0; i <= s->top; i++) {
        printf("%d\n", s->arr[i]);
    }
}

int main() {
  
    s = (struct stack*)malloc(sizeof(struct stack));
    s->size = 5; 
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));

    push(23);
    push(42);
    push(17);

    printf("Stack elements:\n");
    displayStack(s);

    pop();
    printf("Stack elements after poping:\n");
    displayStack(s);

    free(s->arr);
    free(s);

    return 0;
}
