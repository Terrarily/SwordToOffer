#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

typedef struct {
    int stack[MAX];
    int min_stack[MAX];
    int top;
    int min_top;
}MinStack;

MinStack *minStackCreate() {
    MinStack *obj = (MinStack *)malloc(sizeof(MinStack));
    obj->min_top = -1;
    obj->top = -1;
    return obj;
}

//压栈
void minStackPush(MinStack *obj,int x) { 
    if (obj->min_top == -1) {
        obj->stack[++obj->top] = x;
        obj->min_stack[++obj->min_top] = x;
    } else {
        if (x < obj->min_stack[obj->min_top-1])
        {
            obj->stack[++obj->top] = x;
            obj->min_stack[++obj->min_top] = x;
        } else {
            obj->stack[++obj->top] = x;
            obj->min_stack[++obj->min_top] = obj->min_stack[obj->min_top -1];
        }
    }
}

//弹栈
void minStackPop(MinStack *obj) {
    if (obj->top == -1)
    {
        return;
    }
    obj->min_top--;
    obj->top--;
}

//返回stack的栈顶元素
int minStackTop(MinStack *obj) {
    return obj->stack[obj->top];
}

//返回min_stack的栈顶元素
int minStackMin(MinStack *obj) {
    return obj->min_stack[obj->min_top] ;
}

void minStackFree(MinStack *obj) {
    free(obj);
}

int main(int argc, char const *argv[])
{
    int i = 0;
    int value = 0;
    MinStack *obj = minStackCreate();
    for ( i = 0; i < 5; i++)
    {
        printf("value = ");
        scanf("%d",&value);
        minStackPush(obj,value);
    }

    printf("min = %d\n",minStackMin(obj));
    printf("min = %d\n",minStackTop(obj));
    minStackFree(obj);
    return 0;
}
