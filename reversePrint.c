#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    struct link_list *next;
}link_list;

//初始化链表
link_list* link_list_create() {
    link_list *l = (link_list *)malloc(sizeof(link_list));
    if (l == NULL)
    {
        return NULL;
    }
    l->data = 0;
    l->next = NULL;
    return l;
}

//翻转链表
link_list *rever(link_list *obj) {
    link_list *tmp = link_list_create();
    link_list *l = link_list_create();
    if (obj == NULL)
    {
        return obj;
    }
    while (obj != NULL)
    {
        tmp = obj;
        obj = obj->next;
        
        tmp->next = l;
        l = tmp;
    }
    
    
}

void link_list_free(link_list *obj) {
    free(obj);
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
