#include <stdio.h>
#include <stdlib.h> 

typedef struct {
    int stack1[10000];
    int stack2[10000];
    int top1;
    int top2;

}CQueue;

CQueue* cQueueCreate(){
    CQueue *q = (CQueue *)malloc(sizeof(CQueue));
    q->top1 = -1;
    q->top2 = -1;
    return q;
}

void cQueueAppendTail(CQueue *obj,int value)
{
    obj->stack1[++(obj->top1)] = value;
}

int cQueueDeleteHead(CQueue *obj)
{
    if (obj->top2 > -1)
    {
        return obj->stack2[obj->top2--];
    }
    if (obj->top1 == -1)
    {
        return -1;
    } 
    while (obj->top1 > -1)
    {
        obj->stack2[++(obj->top2)] = obj->stack1[(obj->top1)--];
    }

    return obj->stack2[obj->top2--];
}

void cQueueFree(CQueue *obj)
{
    free(obj);
}

int main(int argc, char const *argv[])
{
    //创建队列
    CQueue *obj = cQueueCreate();

    int i = 0;
    int value = 0;
    for ( i = 0; i < 5; i++)
    {
        printf("in :");
        scanf("%d",&value);
        //压栈
        cQueueAppendTail(obj,value);
    }
    for ( i = 0; i < 5; i++)
    {
        //弹栈
        printf("out %d\n",cQueueDeleteHead(obj));
    }
    cQueueFree(obj);

    return 0;
}
