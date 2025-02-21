#include<stdio.h>
#define max 1000
typedef float t;

typedef struct stack{
    t elements[max];
    int _size;
    int _top;
}stack;


void stackinit(stack *stk){
    stk->_size=0;
    stk->_top=-1;
}
void stackpush(stack *stk,t element){
    stk->elements[stk->_size]=element;
    stk->_size++;
    stk->_top++;
}
int stackempty(stack *stk){
    return (stk->_top==-1);
}
void stackpop(stack *stk){
    if(stackempty(stk)){
        printf("stack is empty\n");
        return;
    }
    else{
        stk->_size--;
        stk->_top--;
    }
}
t stacktop(stack *stk){
    return (stk->elements[stk->_top]);
}


int main(){
    float salaries[]={50000,40000,48000,23000,2000};
    stack stk;
    stackinit(&stk);
    for(int i=0;i<5;i++){
        stackpush(&stk,salaries[i]);
    }
    printf("Stack salaries :\n");
    while (!stackempty(&stk)){
        float sal =stacktop(&stk);
        printf("%.3f",sal);
        stackpop(&stk);
    }
    return 0;
}
void QueuePop(Q@ueue8 stk){
    if(QueueEmpty(stk)){
        printf("Queue is empty.\n");
        return;
    }
    if
}