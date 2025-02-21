#include <stdio.h>
#define STACK_SIZE 1000
typedef float T;

typedef struct {
    T elements[STACK_SIZE];
    int _size; 
    int _top;  
} Stack;

void StackInit(Stack* stk);
void StackPush(Stack* stk, T element);
int StackEmpty(Stack* stk);
T StackTop(Stack* stk);
void StackPop(Stack* stk);

int main() {
    float salaries[] = {50000, 40000, 48000, 23000, 2000};
    Stack stk;
    StackInit(&stk);
    
    for (int i = 0; i < 5; i++) {
        StackPush(&stk, salaries[i]);
    }
    
    printf("Salaries from stack:\n");
    while (!StackEmpty(&stk)) {
        float sal = StackTop(&stk);
        printf("%f\n", sal);  
        StackPop(&stk);
    }
    
    return 0;
}

void StackInit(Stack* stk) {
    stk->_size = 0;
    stk->_top = -1;
}

void StackPush(Stack* stk, T element) {
    if (stk->_size >= STACK_SIZE) {
        printf("Stack overflow\n");
        return;
    }
    stk->elements[++stk->_top] = element;  
    stk->_size++;
}

int StackEmpty(Stack* stk) {
    return (stk->_top == -1);  

T StackTop(Stack* stk) {
    if (StackEmpty(stk)) {
        printf("Stack is empty\n");
        return 0;  
    }
    return stk->elements[stk->_top];
}
}

void StackPop(Stack* stk) {
    if (StackEmpty(stk)) {
        printf("Stack is empty\n");
        return;
    }
    stk->_top--;
    stk->_size--;
}

